#include "tdy.h"


/********************************************************************************
 ************************************������**************************************
 *********************************************************************************/

int main()
{
    char a='\0',b='\0',c='\0',d='\0',ch='\0';
    system("color 16");   /**�ı���ɫ*/
        printf("\n");                    /**����ϵͳǰѯ����������*/
        printf("\t\t\t��ӭ������ȫ�¹���Ϣ����ϵͳ     \n\n");
        printf("\n\n\n\t\t\t     �Ƿ��������ݣ�Y/N��");
        ch=getchar();
        if(ch=='Y'||ch=='y')
        {
            loadlist();             /**�����ļ�*/
            if(loadlist())
            {
                printf("\n����ɹ�\n");
                system("pause");
            }
            else
            {
                printf("\n����ʧ��\n");
                system("pause");
            }

        }

    do
    {
        system("cls");             /**�����Ļ��ÿ����ʾǰ���У���ͬ*/

        printf("%d %d %d",size1,size2,size3); /**��ʾ������¼�еĸ�����Ϣ��������ʡ�ݼ����Ϣ--��ȫ�¹���Ϣ--ý�屨����Ϣ�����*/
        printf("\n");
        printf("\t\t\t��ӭ������ȫ�¹���Ϣ����ϵͳ     ");        /**���Ի���*/
        printf("\t\t\t\t\t\t   ���״�ʹ����鿴������\n");
        printf("\t\t\t-----------------------------\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ��    ����F��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ����ά����M��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ���ݲ�ѯ��Q��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ����ͳ�ơ�S��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ��ʾ���ݡ�D��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ������ݡ�C��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ��    ����H��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        ��    �ڡ�A��      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        �˳�ϵͳ��X��      |\n");
        printf("\t\t\t-----------------------------\n\n");
        printf ("\t\t    ���������������ĸ(Сд)�����֣�");
        fflush(stdin);             /**������뻺������ÿ������ǰ���У���ͬ*/
        a=getchar();
        switch(a)
        {
        case 'a':  /**����*/
            About();
            break;
        case 'h':  /**����*/
            Help();
            break;
        case 'c': /**�����������*/
            clear();
            printf("\n����������\n");
            system("pause");
            break;
        case 'd': /**��ʾ��������*/
            if(head)   /**�ж��Ƿ�¼����Ϣ*/
            {
                printall();
                printf("\n��ʾ���\n");
                system("pause");
            }
            else
            {
                printf("\n��δ¼���κ�����\n");
                system("pause");
            }

            break;
        case 'f': /**�����ļ��Ի���*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  �ļ�\n\n");
                printf("\t\t\t-----------------------------\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      �����ļ�     ��1��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      �����ļ�     ��2��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      �����ļ�     ��3��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      ������һ��   ��R��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t-----------------------------\n\n");
                printf("\t\t    ���������������ĸ(Сд)�����֣�");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':
                    savelist(head);   /**�����ļ�*/
                    break;
                case '2':
                    loadlist();   /**�����ļ�*/
                    if(loadlist())
                    {
                        printf("\n����ɹ�\n");
                        system("pause");
                    }
                    else
                    {
                        printf("\n����ʧ��\n");
                        system("pause");
                    }
                    break;
                case '3':
                    backuplist(head);    /**�����ļ�*/
                    break;
                case 'r':
                    break;            /**������һ��*/
                default :
                    printf("\n�������\n");
                    system("pause");
                    break;
                }
            }
            while(b!='r');
            break;
        case 'm': /**��������ά���Ի���*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  ����ά��\n\n");
                printf("\t\t\t-----------------------------\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   ʡ�ݼ����Ϣά����1��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   ��ȫ�¹���Ϣά����2��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   ý�屨����Ϣά����3��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   ������һ��      ��R��   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t-----------------------------\n\n");
                printf("\t\t    ���������������ĸ(Сд)�����֣�");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':   /**����ʡ�ݼ����Ϣά���Ի���*/
                    do
                    {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\tʡ�ݼ����Ϣά��\n\n");
                        printf("\t\t\t-----------------------------\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         ¼��    ��1��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         �޸�    ��2��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         ɾ��    ��3��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|       ������һ�㡾R��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t-----------------------------\n\n");
                        printf("\t\t    ���������������ĸ(Сд)�����֣�");
                        fflush(stdin);
                        c=getchar();
                        switch(c)
                        {
                        case '1':
                            ShengfenCreate();   /**ʡ�ݼ��¼�뺯��*/
                            break;
                        case '2':
                            ShengfenModify();   /**ʡ�ݼ���޸ĺ���*/
                            break;
                        case '3':
                            ShengfenDelete();   /**ʡ�ݼ��ɾ������*/
                            break;
                        case 'r':
                            break;              /**������һ��*/
                        default :
                            printf("\n�������\n");
                            system("pause");
                        }
                    }
                    while(c!='r');
                    break;
                case '2':   /**���밲ȫ�¹���Ϣά���Ի���*/
                    do
                    {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t��ȫ�¹���Ϣά��\n\n");
                        printf("\t\t\t-----------------------------\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         ¼��    ��1��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         �޸�    ��2��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         ɾ��    ��3��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|       ������һ�㡾R��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t-----------------------------\n\n");
                        printf("\t\t    ���������������ĸ(Сд)�����֣�");
                        fflush(stdin);
                        c=getchar();
                        switch(c)
                        {
                        case '1':
                            ShiguCreate();   /**��ȫ�¹ʻ�����Ϣ¼�뺯��*/
                            break;
                        case '2':
                            ShiguModify();   /**��ȫ�¹ʻ�����Ϣ�޸ĺ���*/
                            break;
                        case '3':
                            ShiguDelete();   /**��ȫ�¹ʻ�����Ϣɾ������*/
                            break;
                        case 'r':
                            break;           /**������һ��*/
                        default :
                            printf("\n�������\n");
                            system("pause");
                        }
                    }
                    while(c!='r');
                    break;
                case '3':   /**����ý�屨����Ϣά���Ի���*/
                    do
                    {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\tý�屨����Ϣά��\n\n");
                        printf("\t\t\t-----------------------------\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         ¼��    ��1��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         �޸�    ��2��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         ɾ��    ��3��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|       ������һ�㡾R��     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t-----------------------------\n\n");
                        printf("\t\t    ���������������ĸ(Сд)�����֣�");
                        fflush(stdin);
                        c=getchar();
                        switch(c)
                        {
                        case '1':
                            MeitiCreate();         /**ý�屨����Ϣ¼�뺯��*/
                            break;
                        case '2':
                            MeitiModify();         /**ý�屨����Ϣ�޸ĺ���*/
                            break;
                        case '3':
                            MeitiDelete();         /**ý�屨����Ϣɾ������*/
                            break;
                        case 'r':
                            break;                 /**������һ��*/
                        default :
                            printf("\n�������\n");
                            system("pause");
                        }
                    }
                    while(c!='r');
                    break;
                case 'r':
                    break;          /**������һ��*/
                default :
                    printf("\n�������\n");
                    system("pause");
                }
            }
            while(b!='r');
            break;
        case 'q': /**�������ݲ�ѯ�Ի���*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  ���ݲ�ѯ\n\n");
                printf("\t\t----------------------------------------------\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   ����ʡ�����Ʋ��Ҽ����Ϣ          ��1��  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   ���븺���˲��Ҽ����Ϣ            ��2��  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   �����¹ʱ�Ų��һ�����Ϣ          ��3��  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   �����¹����ͺ�����ʡ�ݲ��һ�����Ϣ��4��  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   �����¹ʱ�ź�ý�����Ʋ���ý����Ϣ��5��  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   �������ں�ý��ؼ��ֲ���ý����Ϣ  ��6��  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   ������һ��                        ��R��  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t----------------------------------------------\n\n");
                printf("\t\t    ���������������ĸ(Сд)�����֣�");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':
                    Query_shengfen(head);        /**����ʡ�����Ʋ��Ҽ����Ϣ����*/
                    break;
                case '2':
                    Query_fuzeren();             /**���븺���˲��Ҽ����Ϣ����*/
                    break;
                case '3':
                    Query_bianhao();             /**�����¹ʱ�Ų��һ�����Ϣ����*/
                    break;
                case '4':
                    Query_leixing_shengfen();    /**�����¹����ͺ�����ʡ�ݲ��һ�����Ϣ����*/
                    break;
                case '5':
                    Query_bianhao_meiti();       /**�����¹ʱ�ź�ý�����Ʋ���ý����Ϣ����*/
                    break;
                case '6':
                    Query_riqi_meiti();          /**�������ں�ý��ؼ��ֲ���ý����Ϣ����*/
                    break;
                case 'r':
                    break;                       /**������һ��*/
                default :
                    printf("\n�������\n");
                    system("pause");
                }
            }
            while(b!='r');
            break;
        case 's': /**��������ͳ�ƶԻ���*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  ����ͳ��\n\n");
                printf("      --------------------------------------------------------------------\n");
                printf("      |                                                                  |\n");
                printf("      | ͳ�������ʡ��ȫ�¹ʷ���������������������������ֱ�Ӿ�����ʧ��1��|\n");
                printf("      |                                                                  |\n");
                printf("      | ͳ��ĳ���ȫ���������ش��ش󡢽ϴ��һ������ȼ��¹ʷ�������2��|\n");
                printf("      |                                                                  |\n");
                printf("      | ͳ�Ƹ������Ͱ�ȫ�¹ʷ�����                                  ��3��|\n");
                printf("      |                                                                  |\n");
                printf("      | ͳ��ý�屨��������10�ΰ�ȫ�¹�                            ��4��|\n");
                printf("      |                                                                  |\n");
                printf("      | ͳ���������¹ʷ�������3��ʡ��                             ��5��|\n");
                printf("      |                                                                  |\n");
                printf("      | ������һ��                                                  ��R��|\n");
                printf("      |                                                                  |\n");
                printf("      --------------------------------------------------------------------\n\n");
                printf("\t\t    ���������������ĸ(Сд)�����֣�");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':
                    Stat_shengfen();      /**ͳ����������ʡ�ݰ�ȫ�¹ʷ���������������������������ֱ�Ӿ�����ʧ������ȫ�¹ʷ�����������������ͳ�ƽ��*/
                    break;
                case '2':
                    Stat_dengji();        /**ͳ��ĳ���ȫ���������ش��ش󡢽ϴ��һ������ȼ���ȫ�¹ʷ�����*/
                    break;
                case '3':
                    Stat_siwangrenshu();  /**������������������������ȫ�¹��������ơ��¹ʷ���������������������������������ֱ�Ӿ�����ʧ�ܶ�*/
                    break;
                case '4':
                    Stat_top10();         /**���������������������¹ʱ�š��¹����͡��¹ʵȼ�������ʡ�ݺ�ý�屨������*/
                    break;
                case '5':
                    Stat_top3();          /**ͳ���¹ʷ�������3��ʡ�ݺ���*/
                case 'r':
                    break;                /**������һ��*/
                default :
                    printf("\n�������\n");
                    system("pause");
                }
            }
            while(b!='r');
            break;
        case 'x':  /**�˳�ϵͳ*/
            {

                break;
            }

        default :
            printf("\n�������\n");
            system("pause");
            break;
        }
    }
    while(a!='x');
    printf("\n��Ҫ�˳�ϵͳ���Ƿ񱣴����ݣ�Y/N��\n");    /**�˳�ϵͳǰȷ���Ƿ񱣴�����*/
    fflush(stdin);
    ch=getchar();
    if(ch=='Y'||ch=='y') savelist(head);
    return 0;
}


/********************************************************************************
 ***********************************���ֺ���*************************************
 *********************************************************************************/

/**********************************************************************
 **************************���ݵı���������***************************
 ***********************************************************************/

/**********************************************
 * ��������: savelist
 * ��������: ����������������������ļ�
 * �������: SHENGFEN_NODE*
 * �� �� ֵ: ��
 * ����˵��: ¼�������ݺ󣬱�������ʱ����
 ***********************************************/
void savelist(SHENGFEN_NODE* head)   /**���湦�ܺ���*/
{
    FILE *p1,*p2,*p3;
    SHENGFEN_NODE*a=NULL;
    SHIGU_NODE *b=NULL;
    MEITI_NODE *c=NULL;
    if((p1=fopen("shengfen.zk","wb"))==NULL)  printf("δ�ҵ�ʡ����Ϣ�ļ�");
    if((p2=fopen("shigu.zk","wb"))==NULL)  printf("δ�ҵ��¹���Ϣ�ļ�");
    if((p3=fopen("meiti.zk","wb"))==NULL)  printf("δ�ҵ�ý����Ϣ�ļ�");
    for(a=head; a!=NULL; a=a->sfnext)
    {
        fwrite(a,sizeof(SHENGFEN_NODE),1,p1);
        for(b=a->sgp; b!=NULL; b=b->sgnext)
        {
            fwrite(b,sizeof(SHIGU_NODE),1,p2);
            for(c=b->mtp; c!=NULL; c=c->mtnext)
                fwrite(c,sizeof(MEITI_NODE),1,p3);
        }
    }
    fclose(p1);
    fclose(p2);
    fclose(p3);
    printf("\n����ɹ�\n");
    system("pause");

}


/**********************************************
 * ��������: backuplist
 * ��������: ����������������������ļ�
 * �������: SHENGFEN_NODE*
 * �� �� ֵ: ��
 * ����˵��: ¼�������ݺ󣬱�������ʱ����
 ***********************************************/
void backuplist(SHENGFEN_NODE* head)   /**���ݹ��ܺ����������뱣�溯�����ƣ������ݴ����һ���ļ���*/
{
    FILE *p1,*p2,*p3;
    SHENGFEN_NODE*a=NULL;
    SHIGU_NODE *b=NULL;
    MEITI_NODE *c=NULL;
    if((p1=fopen("shengfen1.zk","wb"))==NULL)  printf("δ�ҵ�ʡ����Ϣ�ļ�");
    if((p2=fopen("shigu1.zk","wb"))==NULL)  printf("δ�ҵ��¹���Ϣ�ļ�");
    if((p3=fopen("meiti1.zk","wb"))==NULL)  printf("δ�ҵ�ý����Ϣ�ļ�");
    for(a=head; a!=NULL; a=a->sfnext)
    {
        fwrite(a,sizeof(SHENGFEN_NODE),1,p1);
        for(b=a->sgp; b!=NULL; b=b->sgnext)
        {
            fwrite(b,sizeof(SHIGU_NODE),1,p2);
            for(c=b->mtp; c!=NULL; c=c->mtnext)
                fwrite(c,sizeof(MEITI_NODE),1,p3);
        }
    }
    fclose(p1);
    fclose(p2);
    fclose(p3);
    printf("\n���ݳɹ�\n");
    system("pause");

}


/**********************************************
 * ��������: loadlist
 * ��������: ������������������ݴ������ļ�
              ���뵽�ڴ滺������ʮ��������
 * �������: ��
 * �� �� ֵ: int
 * ����˵��: ʹ�ò�ѯͳ�ƺ���ǰ����������ʱ����
 ***********************************************/
int loadlist()     /**���빦�ܺ���*/
{
    FILE *p1,*p2,*p3;
    SHENGFEN_NODE*a=NULL,*p=NULL;
    SHIGU_NODE *b=NULL;
    MEITI_NODE *c=NULL;
    if((p1=fopen("shengfen.zk","rb"))==NULL)
    {
        printf("δ�ҵ�ʡ����Ϣ�ļ�");
        return 0;  /**����ʧ���򷵻�0*/
    }
    if((p2=fopen("shigu.zk","rb"))==NULL)
    {
        printf("δ�ҵ��¹���Ϣ�ļ�");
        return 0;
    }
    if((p3=fopen("meiti.zk","rb"))==NULL)
    {
        printf("δ�ҵ�ý����Ϣ�ļ�");
        return 0;
    }
    while(!feof(p1))     /**����ʡ����Ϣ*/
    {
        a=(SHENGFEN_NODE*)malloc(sizeof(SHENGFEN_NODE));
        fread(a,sizeof(SHENGFEN_NODE),1,p1);
        if(!feof(p1))
        {
            a->sgp=NULL;
            a->sfnext=p;
            p=a;
        }
    }
    head=p;
    while(!feof(p2))     /**�����¹���Ϣ*/
    {
        b=(SHIGU_NODE*)malloc(sizeof(SHIGU_NODE));
        fread(b,sizeof(SHIGU_NODE),1,p2);
        if(!feof(p2))
        {
            b->mtp=NULL;
            for(a=p; a!=NULL; a=a->sfnext)
                if(strcmp(a->shengfen,b->shengfen)==0)
                {
                    b->sgnext=a->sgp;
                    a->sgp=b;
                    break;
                }
        }
    }
    while(!feof(p3))     /**����ý����Ϣ*/
    {
        c=(MEITI_NODE*)malloc(sizeof(MEITI_NODE));

        fread(c,sizeof(MEITI_NODE),1,p3);
        if(!feof(p3))
        {
            for(a=p; a!=NULL; a=a->sfnext)
                for(b=a->sgp; b!=NULL; b=b->sgnext)
                    if(strcmp(b->bianhao,c->bianhao)==0)
                    {
                        c->mtnext=b->mtp;
                        b->mtp=c;
                        break;
                    }
        }
    }
    fclose(p1);
    fclose(p2);
    fclose(p3);
    return 1; /**����ɹ��򷵻�1*/
}

/**********************************************************************
 ****************************����ά������******************************
 ***********************************************************************/

/**********************************************
 * ��������: ShengfenCreate
 * ��������: ��ʡ�ݼ����Ϣ¼�뵽�ڴ滺������
              ʮ��������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ʹ��ʡ�ݼ����Ϣ¼�빦��ʱ����
 ***********************************************/


void ShengfenCreate()           /**ʡ�ݼ����Ϣ¼��*/
{
    char ch='\0';
    SHENGFEN_NODE* p=NULL;
    do
    {
        p=(SHENGFEN_NODE*)malloc(sizeof(SHENGFEN_NODE));   /**���ٿռ�,ÿ��¼��ǰ���У���ͬ*/
        fflush(stdin);
        printf("\n����ʡ�ݣ�");               /**¼����Ϣ*/
        scanf("%s",p->shengfen);
        printf("\n��ܸ����ˣ�");
        fflush(stdin);
        scanf("%s",p->fuzeren);
        printf("\n�绰��");
        fflush(stdin);
        scanf("%s",p->dianhua);
        p->sfnext=NULL;                      /**�ſ�ָ����һ��ͬ����Ϣ�ṹ��ָ��*/
        p->sgp=NULL;                         /**�ſ�ָ����һ����Ϣ�ṹ��ָ��*/
        ShengfenAdd(p);                                       /**ʡ�ݼ�����Ӻ���*/
        printf("\n������һ��ʡ�ݼ����Ϣ��Y/N��");      /**ʵ��������Y��y����ļ���Ϊֹͣ*/
        fflush(stdin);
        ch=getchar();
        size1++;                     /**ʡ����Ϣ��������*/
    }
    while(ch=='Y'||ch=='y');
}


/**********************************************
 * ��������: ShengfenAdd
 * ��������: ��������ʡ�ݼ����Ϣ�ڵ���뵽
              �ڴ滺������ʮ��������
 * �������: SHENGFEN_NODE* p
 * �� �� ֵ: ��
 * ����˵��: ʹ��ʡ�ݼ����Ϣ¼�빦��ʱ��
              ����ShengfenCreate����ͬʱ����
 ***********************************************/
void ShengfenAdd(SHENGFEN_NODE* p)  /**ʡ�ݼ�ܼ�������*/
{
    SHENGFEN_NODE*pa=NULL,*pb=head,*pc=head;
    char ch='\0';
    if(pb==NULL)  /**�ж��Ƿ���¼��ʡ����Ϣ*/
        head=p;
    else
    {
        for(; (strcmp(p->shengfen,pc->shengfen)!=0)&&pc->sfnext != NULL; pc=pc->sfnext); /**ɨ���ж������ʡ����Ϣ�Ƿ��ظ�*/
        if(strcmp(p->shengfen,pc->shengfen)!=0)   /**�ж�sfnextΪNULLʱ��������Ϣ�Ƿ��ظ�*/
        {
            p->sfnext = head;        /**����ȳ���ʽ����*/
            head= p;
        }
        else
        {
            printf("\n###����###");
            printf("\nʡ����Ϣ�ظ�������¼��ʡ�ݼ����Ϣ��Y/N��������������Ч��\n");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'|| ch=='y')
                ShengfenCreate();    /**¼��ʡ����Ϣ����*/
        }
    }
}


/**********************************************
 * ��������: ShiguCreate
 * ��������: ����ȫ�¹���Ϣ¼�뵽�ڴ滺����
              ��ʮ��������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ʹ�ð�ȫ�¹���Ϣ¼�빦��ʱ����
 ***********************************************/
void ShiguCreate()  /**�¹���Ϣ¼��*/
{
    char ch='\0';
    SHIGU_NODE *p=NULL;
    do
    {
        fflush(stdin);
        p=(SHIGU_NODE*)malloc(sizeof(SHIGU_NODE));
        fflush(stdin);
        printf("\n�¹ʱ�ţ�");         /**¼����Ϣ*/
        scanf("%s",p->bianhao);
        printf("\n����ʱ��:");
        fflush(stdin);
        scanf("%s",p->fashengshijian);
        printf("\n�¹�����:");
        fflush(stdin);
        scanf("%s",p->leixing);
        fflush(stdin);                /**�˴�����ջ���bug*/
        getchar();
        printf("\n�¹ʵȼ��������롮1������2������3����4�� ��:");
        fflush(stdin);
        scanf("%c",&p->dengji);
        printf("\n����ʡ��:");
        fflush(stdin);
        scanf("%s",p->shengfen);
        printf("\n�¹ʷ�����λ:");
        fflush(stdin);
        scanf("%s",p->danwei);
        printf("\n��������:");
        fflush(stdin);
        scanf("%d",&p->siwangrenshu);
        printf("\n��������:");
        fflush(stdin);
        scanf("%d",&p->zhongshangrenshu);
        printf("\nֱ�Ӿ�����ʧ����Ԫ��:");
        fflush(stdin);
        scanf("%f",&p->jingjisunshi);
        p->sgnext=NULL;              /**�ſ�ָ����һ��ͬ����Ϣ�ṹ��ָ��*/
        p->mtp=NULL;                 /**�ſ�ָ����һ�ּ���Ϣ�ṹ��ָ��*/
        ShiguAdd(p);               /**�¹���Ϣ���Ӻ���*/
        printf("\n������һ���¹���Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        size2++;          /**�¹���Ϣ��������*/
    }
    while(ch=='Y'||ch=='y');
}


/**********************************************
 * ��������: ShiguAdd
 * ��������: �������İ�ȫ�¹���Ϣ�ڵ����
              ���ڴ滺������ʮ��������
 * �������: SHIGU_NODE* p
 * �� �� ֵ: ��
 * ����˵��: ʹ�ð�ȫ�¹���Ϣ¼�빦��ʱ��
              ����ShiguCreate����ͬʱ����
 ***********************************************/
void ShiguAdd(SHIGU_NODE* p)    /**�¹���Ϣ����*/
{
    char ch='\0';
    int i=1;  /**������ֵΪ0�Ļ�����δ¼���¹���ϢʱiΪ0����ʾ�¹ʱ���ظ�*/
    SHENGFEN_NODE *p1=head,*p2=head;
    SHIGU_NODE *pa=NULL,*pb=NULL;
    if(p1==NULL)    /**�ж��Ƿ�¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��������������Ч��");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'|| ch=='y')
            ShengfenCreate();    /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(; p2!=NULL; p2=p2->sfnext) /**����ѭ���ж��¹ʱ�������ظ�*/
        {
            for(pb=p2->sgp; pb!=NULL; pb=pb->sgnext)
            {
                if(strcmp(pb->bianhao,p->bianhao)==0)  /**�ظ�i=0 ���ظ�i!=0*/
                    i=0;                       /**������ֱ����strcmp�ķ���ֵ����i����������bug����������Ϊ�������ͬ����ֵ������������if���ʵ�ָ�ֵ������*/
            }
        }
        if(i!=0)
        {
            for(; (strcmp(p1->shengfen,p->shengfen)!=0)&&(p1->sfnext!=NULL); p1=p1->sfnext); /**Ѱ�Ҹ�ʡ�ݵ�ʡ����Ϣ�ڵ�*/
            if(strcmp(p1->shengfen,p->shengfen)!=0)                    /**��sfnextΪNULLʱ������ʡ���Ƿ���ͬ*/
            {
                printf("\n###����###");
                printf("\n��δ¼�����ʡ�ļ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��������������Ч��");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    ShengfenCreate();     /**¼��ʡ����Ϣ����*/
            }
            else
            {
                if(p1->sgp==NULL)     /**�жϸ�ʡ���Ƿ���¼���¹���Ϣ*/
                {
                    p1->sgp=p;
                    p->sgnext=NULL;
                }
                else
                {
                    pa=p1->sgp;
                    for(; pa->sgnext!=NULL; pa=pa->sgnext);
                    pa->sgnext=p;
                    p->sgnext=NULL;
                }
            }
        }
        else
        {
            printf("\n###����###");
            printf("\n�¹ʱ���ظ�������¼���¹���Ϣ��Y/N��������������Ч��");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'|| ch=='y')
                ShiguCreate();     /**¼���¹���Ϣ����*/
        }

    }
}


/**********************************************
 * ��������: MeitiCreate
 * ��������: ��ý�屨����Ϣ¼�뵽�ڴ滺����
              ��ʮ��������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ʹ��ý�屨����Ϣ¼�빦��ʱ����
 ***********************************************/
void MeitiCreate()    /**ý����Ϣ¼��*/
{
    char ch='\0';
    MEITI_NODE *p=NULL;
    do
    {
        fflush(stdin);
        p=(MEITI_NODE*)malloc(sizeof(MEITI_NODE));
        fflush(stdin);
        printf("\n�¹ʱ�ţ�");
        fflush(stdin);
        scanf("%s",p->bianhao);
        printf("\n��������:");
        fflush(stdin);
        scanf("%s",p->baodaoriqi);
        printf("\ný����������롮1������2������3����4�� ��:");
        fflush(stdin);
        scanf("%c",&p->meitileibie);
        printf("\ný������:");
        fflush(stdin);
        scanf("%s",p->meitimingcheng);
        printf("\n��������:");
        fflush(stdin);
        scanf("%s",p->neirongsuoyin);
        p->mtnext=NULL;   /**�ſ�ָ����һ��ͬ����Ϣ�ṹ��ָ��*/
        MeitiAdd(p);      /**ý����Ϣ���Ӻ���*/
        printf("\n������һ��ý�屨����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        size3++;         /**ý����Ϣ��������*/
    }
    while(ch=='Y'||ch=='y');
}


/**********************************************
 * ��������: MeitiAdd
 * ��������: ��������ý�屨����Ϣ�ڵ����
              ���ڴ滺������ʮ��������
 * �������: MEITI_NODE* p
 * �� �� ֵ: ��
 * ����˵��: ʹ��ý�屨����Ϣ¼�빦��ʱ��
              ����MeitiCreate����ͬʱ����
 ***********************************************/
void MeitiAdd(MEITI_NODE* p)   /**ý����Ϣ����*/
{
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE *p2=NULL;
    MEITI_NODE *p3=NULL;
    int i=0;
    char ch='\0';
    if(p1==NULL)    /**�ж��Ƿ�¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��������������Ч��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext) /**�ҵ���Ӧ���¹ʱ��*/
        {
            p2=p1->sgp;
            for(; p2!=NULL; p2=p2->sgnext)
            {
                if(strcmp(p2->bianhao,p->bianhao)==0)
                {
                    i=1;
                    break;  /**�ҵ���ֵ1*/
                }
            }
            if(i!=0)
                break;
        }

        if(i!=0)     /**��sgnextΪNULLʱ��i�Ƿ�Ϊ1*/
        {
            if(p2->mtp==NULL)   /**�жϸ��¹��Ƿ���¼��ý����Ϣ*/
            {
                p2->mtp=p;
                p->mtnext=NULL;
            }
            else
            {
                p3=p2->mtp;
                for(; (strcmp(p3->meitimingcheng,p->meitimingcheng)!=0)&&(p3->mtnext!=NULL); p3=p3->mtnext);
                if(strcmp(p3->meitimingcheng,p->meitimingcheng)!=0)    /**�жϸ�ý���Ƿ�Դ��¼��й�����*/
                {

                    for(; p3->mtnext!=NULL; p3=p3->mtnext);
                    p3->mtnext=p;
                    p->mtnext=NULL;
                }
                else
                {
                    printf("\n###����###");
                    printf("\n��¼��%s�Ը��¼��ı���������������Ч��\n",p2->mtp->meitimingcheng);
                }
            }
        }
        else
        {
            printf("\n###����###");
            printf("\n��δ¼������¹ʣ�����¼���¹���Ϣ��Y/N��������������Ч��\n");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'||ch=='y')
                ShiguCreate();     /**¼���¹���Ϣ����*/

        }

    }
}


/**********************************************
 * ��������: ShengfenModify
 * ��������: �޸�ʡ�ݼ����Ϣ������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: Ѱ��ʡ�����ƺ��޸���ʡ�ݼ����Ϣ��
            ���ݣ�ʹ��ʡ�ݼ����Ϣ�޸Ĺ���ʱ����
 ***********************************************/
void ShengfenModify()    /**ʡ����Ϣ�޸�*/
{
    SHENGFEN_NODE*p=head;
    char str[15],ch='\0';
    if(p==NULL)   /**����Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        do
        {
            fflush(stdin);
            printf("\n������Ҫ�޸ĵ�ʡ�����ƣ�");
            scanf("%s",str);
            for(; (strcmp(str,p->shengfen)!=0)&&(p->sfnext!=NULL); p=p->sfnext); /**ѭ��Ѱ�Ҹ�ʡ������*/
            if(strcmp(str,p->shengfen)==0)
            {
                fflush(stdin);
                printf("\n�������µĸ����ˣ�");
                scanf("%s",p->fuzeren);
                printf("\n�������µ���ϵ�绰��");
                fflush(stdin);
                scanf("%s",p->dianhua);
                printf("\n�޸ĳɹ�");
            }
            else
            {
                printf("\n###����###");
                printf("\n��δ¼���ʡ�ݵ���Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    ShengfenCreate();     /**¼��ʡ����Ϣ����*/
            }
            printf("\n�����޸���Y/N��");
            fflush(stdin);
            ch=getchar();
        }
        while(ch=='Y'||ch=='y');
    }
}


/**********************************************
 * ��������: ShiguModify
 * ��������: �޸İ�ȫ�¹���Ϣ������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: Ѱ���¹ʱ�ź��޸��䰲ȫ�¹���Ϣ��
             ���ݣ�ʹ�ð�ȫ�¹���Ϣ�޸Ĺ���ʱ����
 ***********************************************/
void ShiguModify()         /**�¹���Ϣ�޸�*/
{
    int i=0;
    char str[12];
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    char ch='\0';
    if(p1==NULL)     /**����Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        printf("\n������Ҫ�޸ĵ��¹ʱ�ţ�");
        fflush(stdin);
        scanf("%s",str);
        for(; p1!=NULL; p1=p1->sfnext)
        {
            p2=p1->sgp;
            if(p2==NULL)   /**p2Ϊ��ִ���������Ļ���p2->bianhao�����*/
                continue;
            for(; (p2->sgnext!=NULL)&&(strcmp(str,p2->bianhao)!=0); p2=p2->sgnext);
            if(strcmp(str,p2->bianhao)==0)  /**�ҵ���ͬ�����ʼ�޸�*/
            {
                printf("\n�������µķ���ʱ��:");
                fflush(stdin);
                scanf("%s",p2->fashengshijian);
                printf("\n�������µ��¹�����:");
                fflush(stdin);
                scanf("%s",p2->leixing);
                printf("\n�������µ��¹ʵȼ��������롮1������2������3����4�� ��:");
                fflush(stdin);
                scanf("%c",&p2->dengji);
                printf("\n�������µ��¹ʷ�����λ:");
                fflush(stdin);
                scanf("%s",p2->danwei);
                printf("\n�������µ���������:");
                fflush(stdin);
                scanf("%d",&p2->siwangrenshu);
                printf("\n�������µ���������:");
                fflush(stdin);
                scanf("%d",&p2->zhongshangrenshu);
                printf("\n�������µ�ֱ�Ӿ�����ʧ:");
                fflush(stdin);
                scanf("%f",&p2->jingjisunshi);
                printf("\n�޸ĳɹ�");
                system("pause");
                i=1;   /**ִ����������ֵ1*/
            }

        }
        if(i==0) /**�ж��Ƿ��ҵ�*/
        {
            printf("δ�ҵ�Ҫ�޸ĵ��¹���Ϣ");
            system("pause");
        }
    }
}


/**********************************************
 * ��������: MeitiModify
 * ��������: �޸�ý�屨����Ϣ������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: Ѱ���¹ʱ�źͶԸ��¹ʱ�����ý���
              ���ƺ��޸���ý�屨����Ϣ�����ݣ�
              ʹ��ý�屨����Ϣ�޸Ĺ���ʱ����
 ***********************************************/
void MeitiModify()      /**ý����Ϣ�޸�*/
{
    char str1[12],str2[20],ch='\0';
    int i=0,j=0;
    SHENGFEN_NODE*p=head;
    SHIGU_NODE *p1=NULL;
    MEITI_NODE *p2=NULL;
    if(p==NULL)      /**����Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        printf("\n������Ҫ�޸ĵ��¹ʱ��:");
        fflush(stdin);
        scanf("%s",str1);
        printf("\n������Ը��¹ʱ�����ý�������:");
        fflush(stdin);
        scanf("%s",str2);
        for(; p!=NULL; p=p->sfnext) /**����Ѱ����ͬ���¹ʱ��*/
        {
            for(p1=p->sgp; p1!=NULL; p1=p1->sgnext)
            {
                if(strcmp(p1->bianhao,str1)==0)  /**�ҵ���ֵ1*/
                {
                    i=1;
                }
                if(i!=0)
                    break;  /**�ҵ���break*/
            }
            if(i!=0)
                break;   /**�ҵ���break*/
        }
        if(i!=0)
        {
            p2=p1->mtp;
            if(p2==NULL)
            {
                printf("\n###����###");
                printf("\n��δ¼������¹ʵ�ý�屨����Ϣ������¼��ý�屨����Ϣ��Y/N��");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    MeitiCreate();     /**¼��ý����Ϣ����*/
            }
            else
            {
                for(; p2!=NULL; p2=p2->mtnext)  /**�ڶ��α���Ѱ�Ҷ��䱨����ý�������*/
                {
                    if(strcmp(p2->meitimingcheng,str2)==0) /**�ҵ���ֵ1*/
                    {
                        j=1;
                    }
                    if(j!=0)
                        break;  /**�ҵ���break*/
                }
                if(j!=0)  /**�ҵ���ͬ��ý��������ʼ�޸�*/
                {
                    printf("\n�������µı�������:");
                    fflush(stdin);
                    scanf("%s",p2->baodaoriqi);
                    printf("\n�������µ�ý�����:");
                    fflush(stdin);
                    scanf("%c",&p2->meitileibie);
                    printf("\n�������µ���������:");
                    fflush(stdin);
                    scanf("%s",p2->neirongsuoyin);
                    printf("\n�޸ĳɹ�\n");
                    system("pause");
                }
                else
                {
                    printf("\n��ý��û�ж�����¹ʽ��б���������¼��ý�屨����Ϣ��Y/N��");
                    fflush(stdin);
                    ch=getchar();
                    if(ch=='Y'||ch=='y')
                        MeitiCreate();     /**¼��ý����Ϣ����*/
                }
            }
        }
        else
        {
            printf("\n###����###");
            printf("��δ¼�������ŵ��¹ʣ�����¼�밲ȫ�¹���Ϣ��Y/N��\n");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'||ch=='y')
                ShiguCreate();     /**¼���¹���Ϣ����*/
        }
    }
}


/**********************************************
 * ��������: ShengfenDelete
 * ��������: ɾ��ʡ�ݼ����Ϣ�ڵ��Լ��͸�ʡ��
              �����Ϣ��صİ�ȫ�¹���Ϣ�ڵ��
               ý�屨����Ϣ�ڵ�
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: Ѱ��ʡ�����ƺ�ɾ��ʡ�ݼ����Ϣ�ڵ�
              �Լ��͸�ʡ�ݼ����Ϣ��صİ�ȫ�¹�
              ��Ϣ�ڵ��ý�屨����Ϣ�ڵ㣬ʹ��ʡ
              �ݼ����Ϣɾ������ʱ����
 ***********************************************/
void ShengfenDelete()   /**ʡ����Ϣɾ��*/
{
    char str[8],ch='\0';
    SHENGFEN_NODE*p1=head,*p2=NULL;
    SHIGU_NODE *p3=NULL,*p4=NULL;
    MEITI_NODE *p5=NULL,*p6=NULL;
    if(p1==NULL)  /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        printf("\n������Ҫɾ����ʡ�����ƣ�");
        fflush(stdin);
        scanf("%s",str);
        for(; (strcmp(p1->shengfen,str)!=0)&&(p1->sfnext!=NULL); p1=p1->sfnext) /**ѭ��Ѱ��ƥ���ʡ��*/
        {
            p2=p1;
        }  /**ѭ����p1ΪҪɾ���Ľڵ� p2ΪҪɾ���Ľڵ��ǰһ���ڵ�*/

        if(strcmp(p1->shengfen,str)==0) /**�ж�sfnextΪNULLʱ ʡ�������Ƿ���ͬ*/
        {
            printf("\n###����###");   /**����ȷ���Ƿ�Ҫɾ��*/
            printf("\nȷ��Ҫɾ��ʡ����Ϣ��Y/N��������ɾ����֮��ص��¹���Ϣ��ý����Ϣ��");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y' || ch=='y')
            {
                if(p1==head)      /**ɾ���Ľڵ��Ƿ�Ϊͷ���*/
                {
                    head=p1->sfnext;
                }
                else
                    p2->sfnext=p1->sfnext;

                p3=p1->sgp;
                while( p3!=NULL )   /**�ͷŸ�ʡ�ݽڵ��ʡ����Ϣ���¹���Ϣ��ý����Ϣ*/
                {
                    p5=p3->mtp;
                    while(p5!=NULL)     /**һ��Ҫ����˳��p5��ָ����һ���ڵ���ɾ������ڵ㣬������ɾ������ڵ�Ļ�p5����û��mtnextָ��Ҳ���޷�ָ����һ���ڵ㣬�����ɾ������Ҳͬ��*/
                    {
                        p6=p5;
                        p5=p5->mtnext;
                        free(p6);
                    }
                    p4=p3;
                    p3=p3->sgnext;
                    free(p4);
                }
                free(p1);      /**ɾ����ʡ����Ϣ*/
                size1--;       /**ʡ����Ϣ��������*/
                printf("\nɾ���ɹ�\n");
                system("pause");
            }
            else
            {
                printf("\nɾ��ʧ��\n");
                system("pause");
            }
        }
        else
        {
            printf("\n###����###");
            printf("\nδ�ҵ���ʡ�ݵ���Ϣ\n");
            system("pause");
        }
    }
}


/**********************************************
 * ��������: ShiguDelete
 * ��������: ɾ����ȫ�¹���Ϣ�ڵ��Լ��͸ð�ȫ
              �¹���Ϣ��ص�ý�屨����Ϣ�ڵ�
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: Ѱ��ʡ�����ƺ��¹ʱ�ź�ɾ����ȫ�¹�
              ��Ϣ�ڵ��Լ��͸ð�ȫ�¹���Ϣ���ý��
              ������Ϣ�ڵ㣬ʹ�ð�ȫ�¹���Ϣɾ��
              ����ʱ����
 ***********************************************/
void ShiguDelete()    /**�¹���Ϣɾ��*/
{
    int i=0;
    char str1[12],str2[15],ch='\0';
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL,*p3=NULL;
    MEITI_NODE *p4=NULL,*p5=NULL;
    if(p1==NULL)  /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        printf("\n������Ҫɾ�����¹�������ʡ�ݣ�");
        fflush(stdin);
        scanf("%s",str2);
        printf("\n������Ҫɾ�����¹ʱ�ţ�");
        fflush(stdin);
        scanf("%s",str1);
        for(; (strcmp(str2,p1->shengfen)!=0)&&(p1!=NULL); p1=p1->sfnext);  /**����ʡ����Ϣ�ڵ��ҵ���ʡ��*/
           for(p2=p1->sgp; (strcmp(str1,p2->bianhao)!=0)&&(p2->sgnext!=NULL); p2=p2->sgnext) /**�ڸ�ʡ�ݵ��¹���Ϣ�б���Ѱ�Ҹ��¹�*/
            {
                p3=p2;
            }
              /**ѭ����p2ΪҪɾ���Ľڵ� p3ΪҪɾ���Ľڵ��ǰһ���ڵ�*/

            if(p2!=NULL)     /**�ж�p2�Ƿ�Ϊ��*/
            {
                if(strcmp(str1,p2->bianhao)==0)
                i=1;              /**�ҵ���ֵ1*/
                if(i!=0)
                {
                    printf("\n###����###");
                    printf("\nȷ��Ҫɾ���¹���Ϣ��Y/N��������ɾ����֮��ص�ý����Ϣ��");
                    fflush(stdin);
                    ch=getchar();
                    if(ch=='Y'||ch=='y')
                    {
                        if(p2==p1->sgp)   /**�жϸ��¹��Ƿ�Ϊ��һ��*/
                        {
                            p4=p2->mtp;
                            while( p4!=NULL)  /**ɾ��ý����Ϣ*/
                            {
                                p5=p4;
                                p4=p4->mtnext;
                                free(p5);
                            }
                            p1->sgp=p2->sgnext;
                        }
                        else
                        {
                            p4=p2->mtp;
                            while( p4!=NULL)   /**ɾ��ý����Ϣ*/
                            {
                                p5=p4;
                                p4=p4->mtnext;
                                free(p5);
                            }
                            p3->sgnext=p2->sgnext;
                        }
                        free(p2);    /**ɾ�����¹���Ϣ*/
                        size2--;     /**�¹���Ϣ��������*/
                        printf("\nɾ���ɹ�\n");
                        system("pause");
                    }
                    else
                    {
                        printf("\nɾ��ʧ��\n");
                        system("pause");
                    }
                }
                else
                {
                    printf("\nδ�ҵ����¹���Ϣ\n");
                    system("pause");
                }
            }
            else
            {
                printf("\n###����###");
                printf("\n��δ¼���¹ʵ���Ϣ������¼�밲ȫ�¹���Ϣ��Y/N��\n");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    ShiguCreate();     /**¼���¹���Ϣ����*/
            }
    }
}


/**********************************************
 * ��������: MeitiDelete
 * ��������: ɾ��ý�屨����Ϣ�ڵ�
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: Ѱ���¹ʱ�źͶԸ��¹ʱ�����ý�������
              ��ɾ��ý�屨����Ϣ�ڵ㣬ʹ��ý�屨��
              ��Ϣɾ������ʱ����
 ***********************************************/
void MeitiDelete()    /**ý����Ϣɾ��*/
{
    char str1[12],str2[20],ch='\0';
    int i=0,j=0;
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    MEITI_NODE *p3=NULL,*p4=NULL;
    if(p1==NULL)  /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }

    else
    {
        printf("\n������Ҫɾ���¹ʱ�ţ�");
        scanf("%s",str1);
        printf("\n������Ҫɾ��ý�����ƣ�");
        scanf("%s",str2);
        getchar();
        for(; p1!=NULL; p1=p1->sfnext)  /**����Ѱ���¹ʱ��*/
        {
            for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
            {
                if(strcmp(p2->bianhao,str1)==0)  /**�ҵ��¹ʱ����ֵ1*/
                {
                    i=1;
                    break;
                }
            }
            if(i!=0)  break;
        }
        if(i!=0)   /**�Ƿ��ҵ��¹ʱ��*/
        {
            p3=p2->mtp;
            if(p3==NULL)  /**�ж��Ƿ�¼������¹���ص�ý����Ϣ*/
            {
                printf("\n###����###");
                printf("\n��δ¼��ý��Ը��¹ʵı���������¼��ý�屨����Ϣ��Y/N��\n");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                 MeitiCreate();     /**¼��ý����Ϣ����*/
            }
            else
            {
                for(; p3!=NULL; p3=p3->mtnext)  /**����Ѱ��ý������*/
                {
                    if(strcmp(p3->meitimingcheng,str2)==0)  /**�ҵ���ͬ��ý������ֵ1*/
                    {
                        j=1;
                        break;
                    }
                    p4=p3;
                }    /**ѭ����p3ΪҪɾ���Ľڵ� p4ΪҪɾ���Ľڵ��ǰһ���ڵ�*/
                if(j!=0)   /**�Ƿ��ҵ�ý������*/
                {
                   printf("\n###����###");   /**����ȷ���Ƿ�ɾ��*/
                   printf("\nȷ��Ҫɾ��ý����Ϣ��Y/N��");
                   fflush(stdin);
                   ch=getchar();
                   if(ch=='Y'||ch=='y')
                   {
                    if(p3==p2->mtp)   /**�жϸ�ý����Ϣ�Ƿ�Ϊ��һ��*/
                    {
                        p2->mtp=p3->mtnext;
                        free(p3);   /**ɾ����ý����Ϣ*/
                        size3--;    /**ý����Ϣ��������*/
                        printf("\nɾ���ɹ�\n");
                        system("pause");
                    }
                    else
                    {
                        p4->mtnext=p3->mtnext;
                        free(p3);   /**ɾ����ý����Ϣ*/
                        size3--;    /**ý����Ϣ��������*/
                        printf("\nɾ���ɹ�\n");
                        system("pause");
                    }

                  }
                  else
                  {
                      printf("\nɾ��ʧ��\n");
                      system("pause");
                  }
                }
                else
                {
                    printf("\n###����###");
                    printf("\nδ�ҵ���ý��Ը��¹ʵı���\n");
                    system("pause");
                }
            }
        }
        else
        {
            printf("\n###����###");
            printf("\nδ�ҵ����¹ʱ��\n");
            system("pause");
        }
    }
}


/**********************************************************************
 ****************************���ݲ�ѯ����******************************
 ***********************************************************************/



/**********************************************
 * ��������: Query_shengfen
 * ��������: ����ʡ�ݼ����Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ����ʡ�����Ʋ���ʡ�ݼ����Ϣ,ʹ��
              ��ѯʡ�ݼ����Ϣʱ����
 ***********************************************/
void Query_shengfen()  /**����ʡ�����Ʋ��Ҽ����Ϣ����*/
{
    SHENGFEN_NODE* p1=head;
    char str[15],ch='\0';
    printf("\n������Ҫ���ҵ�ʡ�����ƣ�\n");
    fflush(stdin);
    scanf("%s",str);
    if(p1==NULL) /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext)   /**����ʡ����Ϣ*/
        {
            if(strcmp(p1->shengfen,str)==0)  /**�ж��Ƿ��ҵ�*/
            {
                printf("\n����ʡ�ݣ�  %s\n",p1->shengfen);
                printf("\n��ܸ����ˣ�%s\n",p1->fuzeren);
                printf("\n��ϵ�绰��  %s\n",p1->dianhua);
                system("pause");
                break;  /**����������һ����� �����ҵ���break*/
            }

        }
        if(p1==NULL)
        {
            printf("\n###����###");
            printf("\nû����Ҫ�ҵ�ʡ����Ϣ\n");
            system("pause");
        }
    }
}


/**********************************************
 * ��������: Query_fuzeren
 * ��������: ����ʡ�ݼ����Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: �����ܸ��������Ʋ���ʡ�ݼ��
              ��Ϣ,ʹ�ò�ѯʡ�ݼ����Ϣʱ����
 ***********************************************/
void Query_fuzeren()
{
    SHENGFEN_NODE* p1=head;
    char str[15],ch='\0';
    printf("\n������Ҫ���ҵļ�ܸ����ˣ�\n");
    fflush(stdin);
    scanf("%s",str);
    if(p1==NULL)  /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(p1=head; p1!=NULL; p1=p1->sfnext) /**����Ѱ�Ҹ�����*/
        {
            if(strcmp(p1->fuzeren,str)==0) /**�Ƿ��ҵ�������*/
            {
                printf("\n����ʡ�ݣ�%s\n",p1->shengfen);
                printf("\n��ܸ����ˣ�%s\n",p1->fuzeren);
                printf("\n��ϵ�绰��%s\n",p1->dianhua);
                system("pause");
                break;
            }

        }
        if(p1==NULL)
        {
            printf("\n###����###");
            printf("\nû����Ҫ�ҵ�ʡ����Ϣ\n");
            system("pause");
        }

    }
}


/**********************************************
 * ��������: Query_bianhao
 * ��������: ���Ұ�ȫ�¹���Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: �����¹ʱ�Ų��Ұ�ȫ�¹���Ϣ,ʹ��
              ��ѯ��ȫ�¹���Ϣʱ����
 ***********************************************/
void Query_bianhao()
{
    int i=0;
    char str[12],ch='\0';
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE *p2=NULL;
    printf("\n������Ҫ���ҵ��¹���Ϣ�ı�ţ�\n");
    fflush(stdin);
    scanf("%s",str);
    if(p1==NULL)  /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext) /**����Ѱ���¹ʱ��*/
        {
            p2=p1->sgp;
            if(p2!=NULL)
            {
                for(; strcmp(str,p2->bianhao)&&(p2->sgnext!=NULL); p2=p2->sgnext);
                if(p2!=NULL&&(strcmp(str,p2->bianhao)==0)) /**�ж��Ƿ��ҵ�*/
                {
                    printf("\n�¹ʱ��:      %s\n",p2->bianhao);
                    printf("����ʱ��:      %s\n",p2->fashengshijian);
                    printf("�¹�����:      %s\n",p2->leixing);
                    printf("�¹ʵȼ�:      %c\n",p2->dengji);
                    printf("����ʡ��:      %s\n",p2->shengfen);
                    printf("�¹ʷ�����λ:  %s\n",p2->danwei);
                    printf("��������:      %d\n",p2->siwangrenshu);
                    printf("��������:      %d\n",p2->zhongshangrenshu);
                    printf("ֱ�Ӿ�����ʧ:  %f\n",p2->jingjisunshi);
                    system("pause");
                    i=1;  /**ִ������������ֵ1��ʾ���ҵ�*/
                    break; /**ֻ������һ����� �����ҵ�����ѭ��*/
                }
            }
        }
        if(i==0) /**�Ƿ��ҵ�*/
                {
                    printf("û����Ҫ�ҵ��¹���Ϣ");
                    system("pause");
                }
    }
}


/**********************************************
 * ��������: Query_leixing_shengfen
 * ��������: ���Ұ�ȫ�¹���Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: �����¹����ͺ�����ʡ�ݲ��Ұ�ȫ��
              ����Ϣ,ʹ�ò�ѯ��ȫ�¹���Ϣʱ����
 ***********************************************/
void Query_leixing_shengfen()
{
    char str1[20],str2[15],ch='\0';
    int i=0;
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE * p2=NULL;
    printf("������Ҫ���ҵ��¹���Ϣ���¹����ͣ�\n");
    fflush(stdin);
    scanf("%s",str1);
    printf("������Ҫ���ҵ��¹���Ϣ������ʡ�ݣ�\n");
    fflush(stdin);
    scanf("%s",str2);
    if(p1==NULL) /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(; p1!=NULL&&(strcmp(p1->shengfen,str2)!=0); p1=p1->sfnext); /**����Ѱ��ƥ���ʡ��*/
          if(p1!=NULL)
          {
            p2=p1->sgp;
            if(p2!=NULL)
            {
                for(; p2!=NULL; p2=p2->sgnext)  /**����Ѱ��ƥ����¹�����*/
                {
                 if(strcmp(p2->leixing,str1)==0) /**�ж��Ƿ��ҵ�*/
                 {
                    printf("\n�¹ʱ��:       %s\n",p2->bianhao);
                    printf("����ʱ��:       %s\n",p2->fashengshijian);
                    printf("�¹�����:       %s\n",p2->leixing);
                    printf("�¹ʵȼ�:       %c\n",p2->dengji);
                    printf("����ʡ��:       %s\n",p2->shengfen);
                    printf("�¹ʷ�����λ:   %s\n",p2->danwei);
                    printf("��������:       %d\n",p2->siwangrenshu);
                    printf("��������:       %d\n",p2->zhongshangrenshu);
                    printf("ֱ�Ӿ�����ʧ:   %f\n",p2->jingjisunshi);
                    i=1;         /**ִ������������ֵ1��ʾ���ҵ�*/
                    system("pause");
                    /**break; �˴���Ӧbreak ��Ϊ���ܳ��ֶ����ѯ���*/
                 }
                }
            }
          }

        if(i==0) /**�Ƿ��ҵ�*/
        {
            printf("û����Ҫ�ҵ��¹���Ϣ");
            system("pause");
        }
    }


}


/**********************************************
 * ��������: Query_bianhao_meiti
 * ��������: ����ý�屨����Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: �����¹ʱ�ź�ý�����Ʋ���ý�屨
              ����Ϣ,ʹ�ò�ѯý�屨����Ϣʱ����
 ***********************************************/
void Query_bianhao_meiti()
{
    char str1[12],str2[20],ch='\0';
    int i=0;
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE * p2=NULL;
    MEITI_NODE * p3=NULL;
    printf("������Ҫ��ѯý����Ϣ���¹ʱ�ţ�\n");
    fflush(stdin);
    scanf("%s",str1);
    printf("������Ҫ��ѯý����Ϣ��ý�����ƣ�\n");
    fflush(stdin);
    scanf("%s",str2);
    if(p1==NULL)   /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(p1=head; p1!=NULL; p1=p1->sfnext) /**����ʡ����Ϣ*/
        {
            p2=p1->sgp;
            if(p2!=NULL)
            {
                for(; (p2->sgnext!=NULL)&&strcmp(str1,p2->bianhao); p2=p2->sgnext); /**�����������ҵ�ƥ����¹ʱ��*/
                if(strcmp(p2->bianhao,str1)==0)  /**�ж��Ƿ��ҵ�*/
                {
                    p3=p2->mtp;
                    if(p3!=NULL)
                    {
                        for(; p3!=NULL; p3=p3->mtnext) /**����ý����Ϣ*/
                        {
                            if(strcmp(str2,p3->meitimingcheng)==0)/**�ж��Ƿ��ҵ�ƥ���ý������*/
                            {
                                printf("\n�¹ʱ��:       %s\n",p3->bianhao);
                                printf("��������:       %s\n",p3->baodaoriqi);
                                printf("ý�����:       %c\n",p3->meitileibie);
                                printf("ý������:       %s\n",p3->meitimingcheng);
                                printf("��������:       %s\n",p3->neirongsuoyin);
                                i=1;   /**ִ������������ֵ1��ʾ���ҵ�*/
                                system("pause");
                                break;  /**��ѯ������ֻ������һ�������ҵ���break���ٲ���Ҫ��ѭ��*/
                            }
                        }
                    }
                }
            }
        }
        if(i!=1)
        {
            printf("û����Ҫ���ҵ�ý����Ϣ");
            system("pause");
        }
    }
}


/**********************************************
 * ��������: Query_riqi_meiti
 * ��������: ����ý�屨����Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ���뱨�����ں�ý�����ƹؼ��ֲ���
              ý�屨����Ϣ,ʹ�ò�ѯý�屨����
              Ϣʱ����
 ***********************************************/
void Query_riqi_meiti()
{
    char str1[12],str2[20],ch='\0';
    int i=0;
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE * p2=NULL;
    MEITI_NODE * p3=NULL;
    printf("��������Ҫ��ѯý����Ϣ�ı������ڣ�\n");
    fflush(stdin);
    scanf("%s",str1);
    printf("��������Ҫ��ѯý����Ϣ��ý�����ƵĹؼ��֣�\n");
    fflush(stdin);
    scanf("%s",str2);
    if(p1==NULL)   /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext)  /**����ʡ����Ϣ--�¹���Ϣ--ý����Ϣ*/
        {
            for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
            {
                for(p3=p2->mtp; p3!=NULL; p3=p3->mtnext)
                {
                    if((strcmp(p3->baodaoriqi,str1)==0)&&(strstr(p3->meitimingcheng,str2)!=NULL)) /**�ж��Ƿ���ƥ��ı������ں�ý�����ƹؼ���*/
                    {
                        printf("\n�¹ʱ��:    %s\n",p3->bianhao);
                        printf("��������:    %s\n",p3->baodaoriqi);
                        printf("ý�����:    %c\n",p3->meitileibie);
                        printf("ý������:    %s\n",p3->meitimingcheng);
                        printf("��������:    %s\n",p3->neirongsuoyin);
                        i=1;     /**ִ������������ֵ1��ʾ���ҵ�*/
                        system("pause");
                        /**break; ͬ���ڴ˴�����break����Ϊ��ѯ������ܲ�ֹһ��*/
                    }
                }
            }
        }
        if(i!=1)
        {
            printf("û����Ҫ�ҵ�ý����Ϣ");
            system("pause");
        }
    }
}



/**********************************************************************
 ****************************����ͳ�ƺ���******************************
 ***********************************************************************/


/**********************************************
 * ��������: Stat_shengfen
 * ��������: ͳ�ư�ȫ�¹���Ϣ��Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ͳ����������ʡ�ݰ�ȫ�¹ʷ�������
              ��������������������ֱ�Ӿ�����ʧ
              ������ȫ�¹ʷ��������������
              ���ͳ�ƽ����
 ***********************************************/
void Stat_shengfen()
{
    SHENGFEN_NODE* a1=head;
    SHIGU_NODE * a2=NULL;
    TJONE * a=NULL;
    TJONE * p1=NULL,*p2=NULL,*prior1=NULL,*prior2=NULL,*t=NULL;
    TJONE * ahead=NULL;
    char ch='\0';
    int i=0;
    a=ahead;
    if(a1==NULL)  /**�ж��Ƿ���¼��ʡ����Ϣ*/
    {
        printf("\n###����###");
        printf("\n��δ¼��ʡ����Ϣ������¼��ʡ�ݼ����Ϣ��Y/N��\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**¼��ʡ����Ϣ����*/
    }
    else
    {
        for(; i!=size1; a1=a1->sfnext)    /**����ʡ����Ϣ*/
        {
            a=(TJONE *)malloc(sizeof(TJONE));   /**���ٿռ�*/
            strcpy(a->shengfen,a1->shengfen);   /**����ʡ������*/
            a->shigufashengshu=0;               /**��ʼ������*/
            a->siwangrenshu=0;
            a->zhongshangrenshu=0;
            a->jingjisunshi=0;
            for(a2=a1->sgp; a2!=NULL; a2=a2->sgnext)  /**����*/
            {
                a->shigufashengshu++;      /**�¹�������*/
                a->siwangrenshu+=a2->siwangrenshu;       /**���������ۼ�*/
                a->zhongshangrenshu+=a2->zhongshangrenshu;    /**���������ۼ�*/
                a->jingjisunshi+=a2->jingjisunshi;      /**������ʧ�ۼ�*/
            }
            a->next=ahead;  /**����ȳ�*/
            ahead=a;
            i++;
        }
        /**���򣬲ο�c���Կα�*/
        p1=(TJONE *)malloc(sizeof(TJONE));
        p1->next=ahead;
        ahead=prior1=p1;
        for(p1=prior1->next; p1->next!=NULL; prior1=p1,p1=p1->next)
            for(p2=p1->next,prior2=p1; p2!=NULL; prior2=p2,p2=p2->next)
                if(p1->shigufashengshu<p2->shigufashengshu)
                {
                    t=p2->next;
                    prior1->next=p2;
                    prior2->next=p1;
                    p2->next=p1->next;
                    p1->next=t;
                    p1=p2;
                }
        p1=ahead;
        ahead=ahead->next;
        free(p1);



        /**���*/
        printf("\nͳ����Ϣ���£�\n");
        printf("#########################################################\n");
        printf(" ʡ��   �¹ʷ�����   ��������   ��������   ֱ�Ӿ�����ʧ\n");
        for(a=ahead; a!=NULL; a=a->next)
            printf("%s          %d         %d           %d          %f\n",a->shengfen,a->shigufashengshu,a->siwangrenshu,a->zhongshangrenshu,a->jingjisunshi);
        printf("#########################################################\n");
        system("pause");
    }
}


/**********************************************
 * ��������: Stat_dengji
 * ��������: ͳ�ư�ȫ�¹���Ϣ��Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ͳ��ĳ���ȫ���������ش��ش�
            �ϴ��һ������ȼ���ȫ�¹ʷ�������
 ***********************************************/
void Stat_dengji()
{
    int a=0,b=0,c=0,d=0;
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    char m;
    char str[5];
    printf("��������Ҫ��ѯ����ݣ�\n");
    fflush(stdin);
    scanf("%s",str);
    for(; p1!=NULL; p1=p1->sfnext)  /**����*/
    {
        for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
        {
            m=p2->dengji;
            if(!(strncmp(str,p2->fashengshijian,4))) /**Ѱ��ƥ���ǰ�ĸ��ַ�����ݣ�*/
            {
                switch(m)   /**���ȼ������ۼ�*/
                {
                case '1':
                    a++;
                    break;
                case '2':
                    b++;
                    break;
                case '3':
                    c++;
                    break;
                case '4':
                    d++;
                    break;
                default:
                    break;
                }
            }
        }
    }
    /**���*/
    printf("########################################\n");
    printf("*�¹ʵȼ�  �ش�    �ش�    �ϴ�    һ�� \n");
    printf("*��������     %d       %d       %d       %d\n",a,b,c,d);
    printf("########################################\n");
    system("pause");
}


/**********************************************
 * ��������: Stat_siwangrenshu
 * ��������: ͳ�ư�ȫ�¹���Ϣ��Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ͳ�Ƹ������Ͱ�ȫ�¹ʷ�����������
              ��������������������ȫ�¹�����
              ���ơ��¹ʷ���������������������
              ������������ֱ�Ӿ�����ʧ�ܶ
 ***********************************************/
void Stat_siwangrenshu()
{
    /**��13���¹ʷ��������в���ʼ�����ݣ�����ո���Ϊ�������ʱ���Զ���*/
    TJTHREE p[14]= {{"chudian       ",0,0,0,0},{"huozai        ",0,0,0,0},{"zhuotang      ",0,0,0,0},{"yanni         ",0,0,0,0},{"gaochuzhuiluo ",0,0,0,0},{"tanta         ",0,0,0,0},{"toushui       ",0,0,0,0},{"huoyaobaozha  ",0,0,0,0},{"wasibaozha    ",0,0,0,0},{"guolubaozha   ",0,0,0,0},{"qitabaozha    ",0,0,0,0},{"zhongduhezhixi",0,0,0,0},{"qitashanghai  ",0,0,0,0}};
    TJTHREE temp; /**����ʱʹ��*/
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    char *a[14]= {"chudian       ","huozai        ","zhuotang      ","yanni         ","gaochuzhuiluo ","tanta         ","toushui       ","huoyaobaozha  ","wasibaozha    ","guolubaozha  ","qitabaozha     ","zhongduhezhixi","qitashanghai  "};
    char str[20];
    int i,j;
    for(; p1!=NULL; p1=p1->sfnext)
    {
        for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
        {
            strcpy(str,p2->leixing); /**�����¹���������*/

            if(strstr(a[0],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[0].shigufanshengshu++;                       /**������������*/
                p[0].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[0].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[0].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/
            }
            if(strstr(a[1],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[1].shigufanshengshu++;                       /**������������*/
                p[1].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[1].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[1].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[2],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[2].shigufanshengshu++;                       /**������������*/
                p[2].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[2].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[2].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[3],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[3].shigufanshengshu++;                       /**������������*/
                p[3].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[3].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[3].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[4],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[4].shigufanshengshu++;                        /**������������*/
                p[4].siwangrenshu+=p2->siwangrenshu;            /**���������ۼ�*/
                p[4].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[4].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[5],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[5].shigufanshengshu++;                       /**������������*/
                p[5].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[5].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[5].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[6],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[6].shigufanshengshu++;                       /**������������*/
                p[6].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[6].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[6].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[7],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[7].shigufanshengshu++;                       /**������������*/
                p[7].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[7].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[7].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[8],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[8].shigufanshengshu++;                       /**������������*/
                p[8].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[8].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[8].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[9],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[9].shigufanshengshu++;                       /**������������*/
                p[9].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[9].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[9].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[10],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[10].shigufanshengshu++;                       /**������������*/
                p[10].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[10].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[10].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[11],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[11].shigufanshengshu++;                       /**������������*/
                p[11].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[11].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[11].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
            if(strstr(a[12],str)) /**���ڳ�ʼ������������˺ܶ�ո�������strstr��������strncmp*/
            {
                p[12].shigufanshengshu++;                       /**������������*/
                p[12].siwangrenshu+=p2->siwangrenshu;           /**���������ۼ�*/
                p[12].zhongshangrenshu+=p2->zhongshangrenshu;   /**���������ۼ�*/
                p[12].jingjisunshi+=p2->jingjisunshi;           /**������ʧ�ۼ�*/

            }
        }
    }
    /**����*/
    for(i=12; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if((p[j].siwangrenshu)<(p[j+1].siwangrenshu))
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    /**���*/
    printf("ͳ����Ϣ����:\n");
    printf("###############################################################################\n");
    printf("�¹�����        �¹ʷ�����       ��������      ��������    ֱ�Ӿ�����ʧ����Ԫ��\n");
    for(i=0; i<13; i++)
        printf("%s          %d             %d             %d          %f \n",p[i].leixing,p[i].shigufanshengshu,p[i].siwangrenshu,p[i].zhongshangrenshu,p[i].jingjisunshi);
    printf("###############################################################################\n");
    system("pause");

}


/**********************************************
 * ��������: Stat_top10
 * ��������: ͳ��ý�屨����Ϣ��Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ͳ��ý�屨��������10�ΰ�ȫ�¹ʣ�
              ���������������������¹ʱ�š�
              �¹����͡��¹ʵȼ�������ʡ�ݺ�ý
              �屨��������
 ***********************************************/
void Stat_top10()
{
    SHENGFEN_NODE*a1=head;
    SHIGU_NODE *a2=NULL;
    MEITI_NODE *a3=NULL;
    int i=0;
    TJFOUR *a=NULL,*ahead=NULL;
    TJFOUR *prior1=NULL,*prior2=NULL,*p1=NULL,*p2=NULL,*t=NULL;
    a=ahead;
    for(; a1!=NULL; a1=a1->sfnext)  /**����ʡ����Ϣ--�¹���Ϣ*/
    {
        for(a2=a1->sgp; a2!=NULL; a2=a2->sgnext)
        {
            a=(TJFOUR *)malloc(sizeof(TJFOUR));   /**���ٿռ�*/
            strcpy(a->bianhao,a2->bianhao);       /**�����¹ʱ��*/
            a->baodaocishu=0;                     /**��ʼ����������*/
            a->dengji=a2->dengji;                 /**�����¹ʵȼ�*/
            strcpy(a->leixing,a2->leixing);       /**�����¹�����*/
            strcpy(a->shengfen,a2->shengfen);     /**����ʡ������*/
            for(a3=a2->mtp; a3!=NULL; a3=a3->mtnext)  /**����ý����Ϣͳ�Ʊ�������*/
            {
                a->baodaocishu++;   /**������������*/
            }
            a->next=ahead;              /**����ȳ�*/
            ahead=a;
        }
    }
    /**���򣬲ο�c���Կα�*/
    p1=(TJFOUR *)malloc(sizeof(TJFOUR));
    p1->next=ahead;
    ahead=prior1=p1;
    for(p1=prior1->next; p1->next!=NULL; prior1=p1,p1=p1->next)
        for(p2=p1->next,prior2=p1; p2!=NULL; prior2=p2,p2=p2->next)
            if(p1->baodaocishu<p2->baodaocishu)
            {
                t=p2->next;
                prior1->next=p2;
                prior2->next=p1;
                p2->next=p1->next;
                p1->next=t;
                p1=p2;
            }
    p1=ahead;
    ahead=ahead->next;
    free(p1);

    /**���*/
    printf("ͳ����Ϣ����:\n");
    printf("##########################################################################\n");
    printf("�¹ʱ��       �¹�����       �¹ʵȼ�       ����ʡ��       ý�屨������\n");
    for(i=0,a=ahead; (a!=NULL)&&(i<10); a=a->next)            /**i<10 ���ǰʮλ*/
    {

        printf("%s      %s        %c        %s        %d \n",a->bianhao,a->leixing,a->dengji,a->shengfen,a->baodaocishu);
        i++;
        printf("\n");
    }
    printf("##########################################################################\n");
    system("pause");


}


/**********************************************
 * ��������: Stat_top3
 * ��������: ͳ��ʡ�ݼ����Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ͳ�ư�ȫ�¹�������3��ʡ�ݣ�
              ���¹���������������ʡ�����ơ�
 ***********************************************/
void Stat_top3()
{
    int i=0;
    SHENGFEN_NODE*p=head;
    SHIGU_NODE *b=NULL;
    TJFIVE* a=NULL,*ahead=NULL;
    TJFIVE *prior1=NULL,*prior2=NULL,*p1=NULL,*p2=NULL,*t=NULL;
    a=ahead;
    /**¼��*/
    for(; p!=NULL; p=p->sfnext)
    {
        a=(TJFIVE *)malloc(sizeof(TJFIVE));  /**���ٿռ�*/
        strcpy(a->shengfen,p->shengfen);     /**����ʡ������*/
        for(b=p->sgp; b!=NULL; b=b->sgnext) /**����ͳ���¹ʷ�����*/
        {
           a->shigufashengshu++;  /**�¹ʷ���������*/
        }
        a->next=ahead;   /**����ȳ�*/
        ahead=a;
    }
    /**���򣬲ο�c���Կα�*/
    p1=(TJFIVE *)malloc(sizeof(TJFIVE));
    p1->next=ahead;
    ahead=prior1=p1;
    for(p1=prior1->next; p1->next!=NULL; prior1=p1,p1=p1->next)
        for(p2=p1->next,prior2=p1; p2!=NULL; prior2=p2,p2=p2->next)
            if(p1->shigufashengshu<p2->shigufashengshu)
            {
                t=p2->next;
                prior1->next=p2;
                prior2->next=p1;
                p2->next=p1->next;
                p1->next=t;
                p1=p2;
            }
    p1=ahead;
    ahead=ahead->next;
    free(p1);
    /**���*/
    printf("\n�¹ʷ�������������ʡ�ǣ���˳���ţ�");
    for(a=ahead; (i<3); a=a->next) /**i<3 ���ǰ��ʡ*/
    {
        printf("  %s",a->shengfen);
        i++;
    }
    printf("\n");
    system("pause");
}



/**********************************************************************
 ****************************�������ܺ���******************************
 ***********************************************************************/


/**********************************************
 * ��������: Help
 * ��������: ��ʾʹ��˵��
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ʹ�ù���˵��
 ***********************************************/
 void Help()
 {
    system("cls");
    printf("\n");
    printf("\t\t\t\t    ��    ��\n\n");
    printf("\t  -------------------------------------------------------------\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   1.�밴��ʡ����Ϣ--�¹���Ϣ--ý����Ϣ��˳��¼����Ϣ��    |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   2.��Ҫ¼�����ĵģ���ʹ�ú���ƴ����                      |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   3.�¹ʱ�Ÿ�ʽΪ'��+��+��+˳����'���� 20090222001��   |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    ����ʱ���ʽΪ'yyyymmdd-hh:mm'���¹���������Ϊ����Ϊ�� |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    �硢���֡����̡����硢�ߴ�׹�䡢̮����͸ˮ����ҩ��ը�� |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    ��˹��ը����¯��ը��������ը���ж�����Ϣ�������˺�13�� |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    �� �¹ʵȼ�����Ϊ'1'��'2'��'3'��'4'�ĸ��ȼ��ֱ��Ӧ��  |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    ���ش󡢽ϴ��һ�㣬ֱ�Ӿ�����ʧ��λΪ��Ԫ����ң��� |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    �����ڸ�ʽΪ'��+��+��'��ý���������Ϊ'1'��'2'��'3'��  |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    '4'  �ֱ�����Ĵ�ý�壺��ֽ���㲥�����Ӻͻ�������      |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   4.Ĭ��һ��ʡ��ֻ��ӦΨһ�ļ�ܸ����ˣ�һ���¹�ֻ��ӦΨ  |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     һ���¹ʱ�ţ�һ��ý�岻���ظ���һ���¹ʱ�����        |\n");
    printf("\t  |                                                           |\n");
    printf("\t  -------------------------------------------------------------\n");
    getch();
 }


 /**********************************************
 * ��������: About
 * ��������: ��ʾ�������ߺ���Ʒ��Ϣ
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ʹ����ʾ�������ߺ���Ʒ��Ϣʱ����
 ***********************************************/
void About()
{
    system("cls");
    printf("\n");
    printf("\t\t\t\t    ��    ��\n\n");
    printf("\t  -------------------------------------------------------------\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     ��д���ڣ�  2011��10��01��                            |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     ������Ϣ��  �ƿ�1008��Ϳ����                          |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     ��ϵ���ߣ�  13971196561                               |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     ������ʦ��  �                                      |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     �ο����ף� ��C���Գ�����ơ��ܼƲ� ��                 |\n");
    printf("\t  |                                                           |\n");
    printf("\t  -------------------------------------------------------------\n");
    getch();
}


/**********************************************
 * ��������: printall
 * ��������: ��ʾ������¼������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ʹ����ʾ���ݹ���ʱ���ã�ͬʱͳ��
              ��¼�и���Ϣ����
 ***********************************************/
void printall()
{
    int i=0,j=0,k=0;
    size1=0;
    size2=0;
    size3=0;
    SHENGFEN_NODE* p1;
    p1=head;
    SHIGU_NODE *p2;
    MEITI_NODE* p3;
    while(p1!=NULL)
    {
        size1++;  /**ʡ����Ϣ������*/
        i++;      /**ʡ����Ϣ������*/
        /**���*/
        printf("\n###########################ʡ�ݼ����Ϣ %d############################\n",i);
        printf("����ʡ��        %s\n��ܸ�����      %s\n��ϵ�绰        %s\n",p1->shengfen,p1->fuzeren,p1->dianhua);
        printf("#######################################################################\n");
        p2=p1->sgp;
        j=0;
        while (p2!=NULL)
        {
            size2++;  /**�¹���Ϣ������*/
            j++;      /**���ʡ����ص��¹���Ϣ������*/
            /**���*/
            printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@��ȫ�¹���Ϣ %d@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n",j);
            printf("�¹ʱ��        %s\n����ʱ��        %s\n�¹�����        %s\n�¹ʵȼ�        %c ��1 2 3 4 �ĸ��ȼ��ֱ��Ӧ�ش��ش󡢽ϴ��һ�㣩\n����ʡ��        %s\n�¹ʷ�����λ    %s\n��������        %d\n��������        %d\nֱ�Ӿ�����ʧ    %f ��Ԫ\n",p2->bianhao,p2->fashengshijian,p2->leixing,p2->dengji,p2->shengfen,p2->danwei,p2->siwangrenshu,p2->zhongshangrenshu,p2->jingjisunshi);
            printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            p3=p2->mtp;
            k=0;
            while(p3!=NULL)
            {
                size3++;  /**ý����Ϣ������*/
                k++;      /**����¹���ص�ý����Ϣ������*/
                /**���*/
                printf("\n***************************ý�屨����Ϣ %d****************************\n",k);
                printf("�¹ʱ��        %s\n��������        %s\ný�����        %c ��1 2 3 4 �ֱ�����Ĵ�ý�壺��ֽ���㲥�����Ӻͻ�������\ný������        %s\n��������        %s\n",p3->bianhao,p3->baodaoriqi,p3->meitileibie,p3->meitimingcheng,p3->neirongsuoyin);
                printf("***********************************************************************\n");
                p3=p3->mtnext;
            }
            p2=p2->sgnext;
        }

        p1=p1->sfnext;
    }
}


/**********************************************
 * ��������: clear
 * ��������: �����¼�������
 * �������: ��
 * �� �� ֵ: ��
 * ����˵��: ʹ��������ݹ���ʱ����
 ***********************************************/
void clear()
{
    head=NULL;
}


