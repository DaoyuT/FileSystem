#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *ý�屨��������Ϣ�����ṹ
 */
typedef struct meiti_node
{
    char bianhao[12];          /**< �¹ʱ��*/
    char baodaoriqi[10];       /**< ��������*/
    char meitileibie;      	   /**< ý�����*/
    char meitimingcheng[20];   /**< ý������*/
    char neirongsuoyin[50];    /**< ��������*/
    struct meiti *mtnext;   /**< ָ����һ����ָ��*/
} MEITI_NODE;

/**
 *��ȫ�¹ʻ�����Ϣ�����ṹ
 */
typedef struct shigu_node
{
    char bianhao[12];           /**< �¹ʱ��*/
    char fashengshijian[15];    /**< ����ʱ��*/
    char leixing[20];           /**< �¹�����*/
    char dengji;                /**< �¹ʵȼ���1������2������3������4��   �ĸ��ȼ�
                                     �ֱ��Ӧ�ش��ش󡢽ϴ��һ��*/
    char shengfen[15];           /**< ����ʡ��*/
    char danwei[20];            /**< �¹ʷ�����λ*/
    int  siwangrenshu;          /**< ��������*/
    int  zhongshangrenshu;      /**< ��������*/
    float jingjisunshi;         /**< ֱ�Ӿ�����ʧ (��λ ����Ԫ�����)*/
    MEITI_NODE *mtp;            /**<��ָ��ý����Ϣ��ָ��*/
    struct shigu_node *sgnext;      /**< ָ����һ����ָ��*/
} SHIGU_NODE;

/**
 *����ʡ�ݼ����Ϣ�����ṹ
 */
typedef struct shengfen_node
{
    char shengfen[15];           /**< ����ʡ��*/
    char fuzeren[15];           /**< ��ܸ�����*/
    char dianhua[15];           /**< ��ϵ�绰*/
    SHIGU_NODE *sgp;              /**< ָ��ȫ�¹���Ϣ�ṹ��ָ��*/
    struct shengfen_node *sfnext;  /**< ָ����һ����ָ��*/
} SHENGFEN_NODE;




/**
 *ͳ�������ʡ��ȫ�¹ʷ������ṹ 1
 */
typedef struct tjone
{
    char shengfen[15];        /**����ʡ��*/
    int shigufashengshu;     /**��ȫ�¹ʷ�����*/
    int siwangrenshu;        /**��������*/
    int zhongshangrenshu;    /**��������*/
    float jingjisunshi;      /**ֱ�Ӿ�����ʧ*/
    struct tjone *next;      /**ָ����һ��ͳ�ƽڵ�*/
} TJONE;

/**
 *ͳ�Ƹ������Ͱ�ȫ�¹����������ṹ 3
 */
typedef struct tjthree
{
    char leixing[20];            /**�¹�����*/
    int shigufanshengshu;        /**��ȫ�¹ʷ�����*/
    int siwangrenshu;            /**��������*/
    int zhongshangrenshu;        /**��������*/
    float jingjisunshi;          /**ֱ�Ӿ�����ʧ (��λ ����Ԫ�����)*/
} TJTHREE;

/**
 *ͳ��ý�屨��������10�ΰ�ȫ�¹� 4
 */
typedef struct tjfour
{
    char bianhao[12];            /**�¹ʱ��*/
    char leixing[20];            /**�¹�����*/
    char dengji;                 /**�¹ʵȼ���1������2������3������4��   �ĸ��ȼ�
                                     �ֱ��Ӧ�ش��ش󡢽ϴ��һ��*/
    char shengfen[15];            /**�¹ʷ���ʡ��*/
    int baodaocishu;             /**ý�屨������*/
    struct tjfour *next;         /**ָ����һ��ͳ�ƽڵ�*/
} TJFOUR;

/**
 *ͳ���¹ʷ�������3��ʡ�� 5
 */
typedef struct tjfive
{
    char shengfen[15];      /**ʡ������*/
    int shigufashengshu;    /**�¹ʷ�����*/
    struct tjfive* next;    /**ָ����һ��ͳ�ƽڵ�*/
}TJFIVE;

void About();                       /**��ʾ�������ߺ���Ʒ��Ϣ����*/
void Help();                        /**��ʾʹ��˵������*/
void clear();                       /**�����¼�������*/
void printall();                    /**��ʾ��¼�������*/
void ShengfenCreate();              /**ʡ����Ϣ¼�뺯��*/
void ShengfenAdd(SHENGFEN_NODE *);  /**ʡ����Ϣ���Ӻ���*/
void ShiguCreate();                 /**�¹���Ϣ¼�뺯��*/
void ShiguAdd(SHIGU_NODE *);        /**�¹���Ϣ���Ӻ���*/
void MeitiCreate();                 /**ý�屨��¼�뺯��*/
void MeitiAdd(MEITI_NODE*);         /**ý�屨�����Ӻ���*/
void ShengfenModify();              /**ʡ����Ϣ�޸ĺ���*/
void ShengfenDelete();              /**ʡ����Ϣɾ������*/
void ShiguModify();                 /**�¹���Ϣ�޸ĺ���*/
void ShiguDelete();                 /**�¹���Ϣɾ������*/
void MeitiModify();                 /**ý����Ϣ�޸ĺ���*/
void MeitiDelete();                 /**ý����Ϣɾ������*/
void Query_shengfen();              /**����ʡ�����Ʋ��Ҽ����Ϣ����*/
void Query_fuzeren();               /**���븺���˲��Ҽ����Ϣ����*/
void Query_bianhao();               /**�����¹ʱ�Ų��һ�����Ϣ����*/
void Query_leixing_shengfen();      /**�����¹����ͺ�����ʡ�ݲ��һ�����Ϣ����*/
void Query_bianhao_meiti();         /**�����¹ʱ�ź�ý�����Ʋ���ý�屨����Ϣ����*/
void Query_riqi_meiti();            /**�������ں�ý�����ƹؼ��ֲ���ý�屨����Ϣ����*/
void Stat_shengfen();               /**ͳ�������ʡ��ȫ�¹ʷ���������*/
void Stat_dengji();                 /**ͳ��ĳ���ȫ���¹ʵȼ�����*/
void Stat_siwangrenshu();           /**ͳ�Ƹ������Ͱ�ȫ�¹�������������*/
void Stat_top10();                  /**ͳ��ý�屨��������10�ΰ�ȫ�¹ʺ���*/
void Stat_top3();                   /**ͳ���¹ʷ�������3��ʡ�ݺ���*/
void savelist(SHENGFEN_NODE *);     /**�������ݺ���*/
int loadlist();                     /**�������ݺ���*/
void backuplist();                  /**�������ݺ���*/

SHENGFEN_NODE*head=NULL;         /**����ͷָ��*/
int size1=0;                     /**ʡ����Ϣ����*/
int size2=0;                     /**�¹���Ϣ����*/
int size3=0;                     /**ý����Ϣ����*/
