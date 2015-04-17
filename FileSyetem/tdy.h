#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *媒体报道基本信息链结点结构
 */
typedef struct meiti_node
{
    char bianhao[12];          /**< 事故编号*/
    char baodaoriqi[10];       /**< 报道日期*/
    char meitileibie;      	   /**< 媒体类别*/
    char meitimingcheng[20];   /**< 媒体名称*/
    char neirongsuoyin[50];    /**< 内容索引*/
    struct meiti *mtnext;   /**< 指向下一结点的指针*/
} MEITI_NODE;

/**
 *安全事故基本信息链结点结构
 */
typedef struct shigu_node
{
    char bianhao[12];           /**< 事故编号*/
    char fashengshijian[15];    /**< 发生时间*/
    char leixing[20];           /**< 事故类型*/
    char dengji;                /**< 事故等级‘1’、‘2’、‘3’、‘4’   四个等级
                                     分别对应特大、重大、较大和一般*/
    char shengfen[15];           /**< 所属省份*/
    char danwei[20];            /**< 事故发生单位*/
    int  siwangrenshu;          /**< 死亡人数*/
    int  zhongshangrenshu;      /**< 重伤人数*/
    float jingjisunshi;         /**< 直接经济损失 (单位 ：万元人民币)*/
    MEITI_NODE *mtp;            /**<　指向媒体信息的指针*/
    struct shigu_node *sgnext;      /**< 指向下一结点的指针*/
} SHIGU_NODE;

/**
 *所属省份监管信息链结点结构
 */
typedef struct shengfen_node
{
    char shengfen[15];           /**< 所属省份*/
    char fuzeren[15];           /**< 监管负责人*/
    char dianhua[15];           /**< 联系电话*/
    SHIGU_NODE *sgp;              /**< 指向安全事故信息结构的指针*/
    struct shengfen_node *sfnext;  /**< 指向下一结点的指针*/
} SHENGFEN_NODE;




/**
 *统计历年各省安全事故发生数结构 1
 */
typedef struct tjone
{
    char shengfen[15];        /**所属省份*/
    int shigufashengshu;     /**安全事故发生数*/
    int siwangrenshu;        /**死亡人数*/
    int zhongshangrenshu;    /**重伤人数*/
    float jingjisunshi;      /**直接经济损失*/
    struct tjone *next;      /**指向下一个统计节点*/
} TJONE;

/**
 *统计各种类型安全事故死亡人数结构 3
 */
typedef struct tjthree
{
    char leixing[20];            /**事故类型*/
    int shigufanshengshu;        /**安全事故发生数*/
    int siwangrenshu;            /**死亡人数*/
    int zhongshangrenshu;        /**重伤人数*/
    float jingjisunshi;          /**直接经济损失 (单位 ：万元人民币)*/
} TJTHREE;

/**
 *统计媒体报道数最多的10次安全事故 4
 */
typedef struct tjfour
{
    char bianhao[12];            /**事故编号*/
    char leixing[20];            /**事故类型*/
    char dengji;                 /**事故等级‘1’、‘2’、‘3’、‘4’   四个等级
                                     分别对应特大、重大、较大和一般*/
    char shengfen[15];            /**事故发生省份*/
    int baodaocishu;             /**媒体报道次数*/
    struct tjfour *next;         /**指向下一个统计节点*/
} TJFOUR;

/**
 *统计事故发生最多的3个省份 5
 */
typedef struct tjfive
{
    char shengfen[15];      /**省份名称*/
    int shigufashengshu;    /**事故发生数*/
    struct tjfive* next;    /**指向下一个统计节点*/
}TJFIVE;

void About();                       /**显示关于作者和作品信息函数*/
void Help();                        /**显示使用说明函数*/
void clear();                       /**清空已录入的内容*/
void printall();                    /**显示已录入的内容*/
void ShengfenCreate();              /**省份信息录入函数*/
void ShengfenAdd(SHENGFEN_NODE *);  /**省份信息增加函数*/
void ShiguCreate();                 /**事故信息录入函数*/
void ShiguAdd(SHIGU_NODE *);        /**事故信息增加函数*/
void MeitiCreate();                 /**媒体报道录入函数*/
void MeitiAdd(MEITI_NODE*);         /**媒体报道增加函数*/
void ShengfenModify();              /**省份信息修改函数*/
void ShengfenDelete();              /**省份信息删除函数*/
void ShiguModify();                 /**事故信息修改函数*/
void ShiguDelete();                 /**事故信息删除函数*/
void MeitiModify();                 /**媒体信息修改函数*/
void MeitiDelete();                 /**媒体信息删除函数*/
void Query_shengfen();              /**输入省份名称查找监管信息函数*/
void Query_fuzeren();               /**输入负责人查找监管信息函数*/
void Query_bianhao();               /**输入事故编号查找基本信息函数*/
void Query_leixing_shengfen();      /**输入事故类型和所属省份查找基本信息函数*/
void Query_bianhao_meiti();         /**输入事故编号和媒体名称查找媒体报道信息函数*/
void Query_riqi_meiti();            /**输入日期和媒体名称关键字查找媒体报道信息函数*/
void Stat_shengfen();               /**统计历年各省安全事故发生数函数*/
void Stat_dengji();                 /**统计某年度全国事故等级函数*/
void Stat_siwangrenshu();           /**统计各种类型安全事故死亡人数函数*/
void Stat_top10();                  /**统计媒体报道数最多的10次安全事故函数*/
void Stat_top3();                   /**统计事故发生最多的3个省份函数*/
void savelist(SHENGFEN_NODE *);     /**保存数据函数*/
int loadlist();                     /**载入数据函数*/
void backuplist();                  /**载入数据函数*/

SHENGFEN_NODE*head=NULL;         /**定义头指针*/
int size1=0;                     /**省份信息个数*/
int size2=0;                     /**事故信息个数*/
int size3=0;                     /**媒体信息个数*/
