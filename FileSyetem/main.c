#include "tdy.h"


/********************************************************************************
 ************************************主函数**************************************
 *********************************************************************************/

int main()
{
    char a='\0',b='\0',c='\0',d='\0',ch='\0';
    system("color 16");   /**改变颜色*/
        printf("\n");                    /**进入系统前询问载入数据*/
        printf("\t\t\t欢迎来到安全事故信息管理系统     \n\n");
        printf("\n\n\n\t\t\t     是否载入数据（Y/N）");
        ch=getchar();
        if(ch=='Y'||ch=='y')
        {
            loadlist();             /**载入文件*/
            if(loadlist())
            {
                printf("\n载入成功\n");
                system("pause");
            }
            else
            {
                printf("\n载入失败\n");
                system("pause");
            }

        }

    do
    {
        system("cls");             /**清除屏幕，每次显示前均有，下同*/

        printf("%d %d %d",size1,size2,size3); /**显示现在已录有的各个信息个数（按省份监管信息--安全事故信息--媒体报道信息输出）*/
        printf("\n");
        printf("\t\t\t欢迎来到安全事故信息管理系统     ");        /**主对话框*/
        printf("\t\t\t\t\t\t   （首次使用请查看帮助）\n");
        printf("\t\t\t-----------------------------\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        文    件【F】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        数据维护【M】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        数据查询【Q】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        数据统计【S】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        显示数据【D】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        清空数据【C】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        帮    助【H】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        关    于【A】      |\n");
        printf("\t\t\t|                           |\n");
        printf("\t\t\t|        退出系统【X】      |\n");
        printf("\t\t\t-----------------------------\n\n");
        printf ("\t\t    请输入括号里的字母(小写)或数字：");
        fflush(stdin);             /**清空输入缓冲区，每次输入前均有，下同*/
        a=getchar();
        switch(a)
        {
        case 'a':  /**关于*/
            About();
            break;
        case 'h':  /**帮助*/
            Help();
            break;
        case 'c': /**清空所有数据*/
            clear();
            printf("\n清空数据完毕\n");
            system("pause");
            break;
        case 'd': /**显示所有数据*/
            if(head)   /**判断是否录有信息*/
            {
                printall();
                printf("\n显示完毕\n");
                system("pause");
            }
            else
            {
                printf("\n还未录入任何内容\n");
                system("pause");
            }

            break;
        case 'f': /**进入文件对话框*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  文件\n\n");
                printf("\t\t\t-----------------------------\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      保存文件     【1】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      载入文件     【2】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      备份文件     【3】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|      返回上一层   【R】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t-----------------------------\n\n");
                printf("\t\t    请输入括号里的字母(小写)或数字：");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':
                    savelist(head);   /**保存文件*/
                    break;
                case '2':
                    loadlist();   /**载入文件*/
                    if(loadlist())
                    {
                        printf("\n载入成功\n");
                        system("pause");
                    }
                    else
                    {
                        printf("\n载入失败\n");
                        system("pause");
                    }
                    break;
                case '3':
                    backuplist(head);    /**备份文件*/
                    break;
                case 'r':
                    break;            /**返回上一层*/
                default :
                    printf("\n输入错误\n");
                    system("pause");
                    break;
                }
            }
            while(b!='r');
            break;
        case 'm': /**进入数据维护对话框*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  数据维护\n\n");
                printf("\t\t\t-----------------------------\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   省份监管信息维护【1】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   安全事故信息维护【2】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   媒体报道信息维护【3】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t|   返回上一层      【R】   |\n");
                printf("\t\t\t|                           |\n");
                printf("\t\t\t-----------------------------\n\n");
                printf("\t\t    请输入括号里的字母(小写)或数字：");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':   /**进入省份监管信息维护对话框*/
                    do
                    {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t省份监管信息维护\n\n");
                        printf("\t\t\t-----------------------------\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         录入    【1】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         修改    【2】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         删除    【3】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|       返回上一层【R】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t-----------------------------\n\n");
                        printf("\t\t    请输入括号里的字母(小写)或数字：");
                        fflush(stdin);
                        c=getchar();
                        switch(c)
                        {
                        case '1':
                            ShengfenCreate();   /**省份监管录入函数*/
                            break;
                        case '2':
                            ShengfenModify();   /**省份监管修改函数*/
                            break;
                        case '3':
                            ShengfenDelete();   /**省份监管删除函数*/
                            break;
                        case 'r':
                            break;              /**返回上一层*/
                        default :
                            printf("\n输入错误\n");
                            system("pause");
                        }
                    }
                    while(c!='r');
                    break;
                case '2':   /**进入安全事故信息维护对话框*/
                    do
                    {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t安全事故信息维护\n\n");
                        printf("\t\t\t-----------------------------\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         录入    【1】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         修改    【2】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         删除    【3】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|       返回上一层【R】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t-----------------------------\n\n");
                        printf("\t\t    请输入括号里的字母(小写)或数字：");
                        fflush(stdin);
                        c=getchar();
                        switch(c)
                        {
                        case '1':
                            ShiguCreate();   /**安全事故基本信息录入函数*/
                            break;
                        case '2':
                            ShiguModify();   /**安全事故基本信息修改函数*/
                            break;
                        case '3':
                            ShiguDelete();   /**安全事故基本信息删除函数*/
                            break;
                        case 'r':
                            break;           /**返回上一层*/
                        default :
                            printf("\n输入错误\n");
                            system("pause");
                        }
                    }
                    while(c!='r');
                    break;
                case '3':   /**进入媒体报道信息维护对话框*/
                    do
                    {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t媒体报道信息维护\n\n");
                        printf("\t\t\t-----------------------------\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         录入    【1】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         修改    【2】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|         删除    【3】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t|       返回上一层【R】     |\n");
                        printf("\t\t\t|                           |\n");
                        printf("\t\t\t-----------------------------\n\n");
                        printf("\t\t    请输入括号里的字母(小写)或数字：");
                        fflush(stdin);
                        c=getchar();
                        switch(c)
                        {
                        case '1':
                            MeitiCreate();         /**媒体报道信息录入函数*/
                            break;
                        case '2':
                            MeitiModify();         /**媒体报道信息修改函数*/
                            break;
                        case '3':
                            MeitiDelete();         /**媒体报道信息删除函数*/
                            break;
                        case 'r':
                            break;                 /**返回上一层*/
                        default :
                            printf("\n输入错误\n");
                            system("pause");
                        }
                    }
                    while(c!='r');
                    break;
                case 'r':
                    break;          /**返回上一层*/
                default :
                    printf("\n输入错误\n");
                    system("pause");
                }
            }
            while(b!='r');
            break;
        case 'q': /**进入数据查询对话框*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  数据查询\n\n");
                printf("\t\t----------------------------------------------\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   输入省份名称查找监管信息          【1】  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   输入负责人查找监管信息            【2】  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   输入事故编号查找基本信息          【3】  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   输入事故类型和所属省份查找基本信息【4】  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   输入事故编号和媒体名称查找媒体信息【5】  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   输入日期和媒体关键字查找媒体信息  【6】  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t|   返回上一层                        【R】  |\n");
                printf("\t\t|                                            |\n");
                printf("\t\t----------------------------------------------\n\n");
                printf("\t\t    请输入括号里的字母(小写)或数字：");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':
                    Query_shengfen(head);        /**输入省份名称查找监管信息函数*/
                    break;
                case '2':
                    Query_fuzeren();             /**输入负责人查找监管信息函数*/
                    break;
                case '3':
                    Query_bianhao();             /**输入事故编号查找基本信息函数*/
                    break;
                case '4':
                    Query_leixing_shengfen();    /**输入事故类型和所属省份查找基本信息函数*/
                    break;
                case '5':
                    Query_bianhao_meiti();       /**输入事故编号和媒体名称查找媒体信息函数*/
                    break;
                case '6':
                    Query_riqi_meiti();          /**输入日期和媒体关键字查找媒体信息函数*/
                    break;
                case 'r':
                    break;                       /**返回上一层*/
                default :
                    printf("\n输入错误\n");
                    system("pause");
                }
            }
            while(b!='r');
            break;
        case 's': /**进入数据统计对话框*/
            do
            {
                system("cls");
                printf("\n");
                printf("\t\t\t\t  数据统计\n\n");
                printf("      --------------------------------------------------------------------\n");
                printf("      |                                                                  |\n");
                printf("      | 统计历年各省安全事故发生数、死亡人数、重伤人数和直接经济损失【1】|\n");
                printf("      |                                                                  |\n");
                printf("      | 统计某年度全国发生的特大、重大、较大和一般四类等级事故发生数【2】|\n");
                printf("      |                                                                  |\n");
                printf("      | 统计各种类型安全事故发生数                                  【3】|\n");
                printf("      |                                                                  |\n");
                printf("      | 统计媒体报道数最多的10次安全事故                            【4】|\n");
                printf("      |                                                                  |\n");
                printf("      | 统计历年来事故发生最多的3个省份                             【5】|\n");
                printf("      |                                                                  |\n");
                printf("      | 返回上一层                                                  【R】|\n");
                printf("      |                                                                  |\n");
                printf("      --------------------------------------------------------------------\n\n");
                printf("\t\t    请输入括号里的字母(小写)或数字：");
                fflush(stdin);
                b=getchar();
                switch(b)
                {
                case '1':
                    Stat_shengfen();      /**统计历年来各省份安全事故发生数、死亡人数、重伤人数和直接经济损失，按安全事故发生数降序排序后，输出统计结果*/
                    break;
                case '2':
                    Stat_dengji();        /**统计某年度全国发生的特大、重大、较大和一般四类等级安全事故发生数*/
                    break;
                case '3':
                    Stat_siwangrenshu();  /**按死亡人数降序排序后输出安全事故类型名称、事故发生总数、死亡总人数、重伤总人数和直接经济损失总额*/
                    break;
                case '4':
                    Stat_top10();         /**按报道数降序排序后输出事故编号、事故类型、事故等级、所属省份和媒体报道次数*/
                    break;
                case '5':
                    Stat_top3();          /**统计事故发生最多的3个省份函数*/
                case 'r':
                    break;                /**返回上一层*/
                default :
                    printf("\n输入错误\n");
                    system("pause");
                }
            }
            while(b!='r');
            break;
        case 'x':  /**退出系统*/
            {

                break;
            }

        default :
            printf("\n输入错误\n");
            system("pause");
            break;
        }
    }
    while(a!='x');
    printf("\n将要退出系统，是否保存数据（Y/N）\n");    /**退出系统前确认是否保存数据*/
    fflush(stdin);
    ch=getchar();
    if(ch=='Y'||ch=='y') savelist(head);
    return 0;
}


/********************************************************************************
 ***********************************各种函数*************************************
 *********************************************************************************/

/**********************************************************************
 **************************数据的保存与载入***************************
 ***********************************************************************/

/**********************************************
 * 函数名称: savelist
 * 函数功能: 保存三类基础数据至数据文件
 * 输入参数: SHENGFEN_NODE*
 * 返 回 值: 无
 * 调用说明: 录入完数据后，保存数据时调用
 ***********************************************/
void savelist(SHENGFEN_NODE* head)   /**保存功能函数*/
{
    FILE *p1,*p2,*p3;
    SHENGFEN_NODE*a=NULL;
    SHIGU_NODE *b=NULL;
    MEITI_NODE *c=NULL;
    if((p1=fopen("shengfen.zk","wb"))==NULL)  printf("未找到省份信息文件");
    if((p2=fopen("shigu.zk","wb"))==NULL)  printf("未找到事故信息文件");
    if((p3=fopen("meiti.zk","wb"))==NULL)  printf("未找到媒体信息文件");
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
    printf("\n保存成功\n");
    system("pause");

}


/**********************************************
 * 函数名称: backuplist
 * 函数功能: 备份三类基础数据至数据文件
 * 输入参数: SHENGFEN_NODE*
 * 返 回 值: 无
 * 调用说明: 录入完数据后，备份数据时调用
 ***********************************************/
void backuplist(SHENGFEN_NODE* head)   /**备份功能函数，内容与保存函数类似，将数据存进另一组文件里*/
{
    FILE *p1,*p2,*p3;
    SHENGFEN_NODE*a=NULL;
    SHIGU_NODE *b=NULL;
    MEITI_NODE *c=NULL;
    if((p1=fopen("shengfen1.zk","wb"))==NULL)  printf("未找到省份信息文件");
    if((p2=fopen("shigu1.zk","wb"))==NULL)  printf("未找到事故信息文件");
    if((p3=fopen("meiti1.zk","wb"))==NULL)  printf("未找到媒体信息文件");
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
    printf("\n备份成功\n");
    system("pause");

}


/**********************************************
 * 函数名称: loadlist
 * 函数功能: 将代码表和三类基础数据从数据文件
              载入到内存缓冲区和十字链表中
 * 输入参数: 无
 * 返 回 值: int
 * 调用说明: 使用查询统计函数前，载入数据时调用
 ***********************************************/
int loadlist()     /**载入功能函数*/
{
    FILE *p1,*p2,*p3;
    SHENGFEN_NODE*a=NULL,*p=NULL;
    SHIGU_NODE *b=NULL;
    MEITI_NODE *c=NULL;
    if((p1=fopen("shengfen.zk","rb"))==NULL)
    {
        printf("未找到省份信息文件");
        return 0;  /**载入失败则返回0*/
    }
    if((p2=fopen("shigu.zk","rb"))==NULL)
    {
        printf("未找到事故信息文件");
        return 0;
    }
    if((p3=fopen("meiti.zk","rb"))==NULL)
    {
        printf("未找到媒体信息文件");
        return 0;
    }
    while(!feof(p1))     /**载入省份信息*/
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
    while(!feof(p2))     /**载入事故信息*/
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
    while(!feof(p3))     /**载入媒体信息*/
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
    return 1; /**载入成功则返回1*/
}

/**********************************************************************
 ****************************数据维护函数******************************
 ***********************************************************************/

/**********************************************
 * 函数名称: ShengfenCreate
 * 函数功能: 将省份监管信息录入到内存缓冲区和
              十字链表中
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 使用省份监管信息录入功能时调用
 ***********************************************/


void ShengfenCreate()           /**省份监管信息录入*/
{
    char ch='\0';
    SHENGFEN_NODE* p=NULL;
    do
    {
        p=(SHENGFEN_NODE*)malloc(sizeof(SHENGFEN_NODE));   /**开辟空间,每次录入前均有，下同*/
        fflush(stdin);
        printf("\n所属省份：");               /**录入信息*/
        scanf("%s",p->shengfen);
        printf("\n监管负责人：");
        fflush(stdin);
        scanf("%s",p->fuzeren);
        printf("\n电话：");
        fflush(stdin);
        scanf("%s",p->dianhua);
        p->sfnext=NULL;                      /**放空指向下一个同级信息结构的指针*/
        p->sgp=NULL;                         /**放空指向下一级信息结构的指针*/
        ShengfenAdd(p);                                       /**省份监管增加函数*/
        printf("\n输入下一个省份监管信息吗（Y/N）");      /**实际上输入Y或y以外的即视为停止*/
        fflush(stdin);
        ch=getchar();
        size1++;                     /**省份信息个数增加*/
    }
    while(ch=='Y'||ch=='y');
}


/**********************************************
 * 函数名称: ShengfenAdd
 * 函数功能: 将新增的省份监管信息节点插入到
              内存缓冲区和十字链表中
 * 输入参数: SHENGFEN_NODE* p
 * 返 回 值: 无
 * 调用说明: 使用省份监管信息录入功能时，
              跟随ShengfenCreate函数同时调用
 ***********************************************/
void ShengfenAdd(SHENGFEN_NODE* p)  /**省份监管加入链表*/
{
    SHENGFEN_NODE*pa=NULL,*pb=head,*pc=head;
    char ch='\0';
    if(pb==NULL)  /**判断是否已录有省份信息*/
        head=p;
    else
    {
        for(; (strcmp(p->shengfen,pc->shengfen)!=0)&&pc->sfnext != NULL; pc=pc->sfnext); /**扫描判断输入的省份信息是否重复*/
        if(strcmp(p->shengfen,pc->shengfen)!=0)   /**判断sfnext为NULL时，它的信息是否重复*/
        {
            p->sfnext = head;        /**后进先出方式插入*/
            head= p;
        }
        else
        {
            printf("\n###警告###");
            printf("\n省份信息重复，现在录入省份监管信息吗（Y/N）（以上输入无效）\n");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'|| ch=='y')
                ShengfenCreate();    /**录入省份信息函数*/
        }
    }
}


/**********************************************
 * 函数名称: ShiguCreate
 * 函数功能: 将安全事故信息录入到内存缓冲区
              和十字链表中
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 使用安全事故信息录入功能时调用
 ***********************************************/
void ShiguCreate()  /**事故信息录入*/
{
    char ch='\0';
    SHIGU_NODE *p=NULL;
    do
    {
        fflush(stdin);
        p=(SHIGU_NODE*)malloc(sizeof(SHIGU_NODE));
        fflush(stdin);
        printf("\n事故编号：");         /**录入信息*/
        scanf("%s",p->bianhao);
        printf("\n发生时间:");
        fflush(stdin);
        scanf("%s",p->fashengshijian);
        printf("\n事故类型:");
        fflush(stdin);
        scanf("%s",p->leixing);
        fflush(stdin);                /**此处不清空会有bug*/
        getchar();
        printf("\n事故等级（请输入‘1’、‘2’、‘3’或‘4’ ）:");
        fflush(stdin);
        scanf("%c",&p->dengji);
        printf("\n所属省份:");
        fflush(stdin);
        scanf("%s",p->shengfen);
        printf("\n事故发生单位:");
        fflush(stdin);
        scanf("%s",p->danwei);
        printf("\n死亡人数:");
        fflush(stdin);
        scanf("%d",&p->siwangrenshu);
        printf("\n重伤人数:");
        fflush(stdin);
        scanf("%d",&p->zhongshangrenshu);
        printf("\n直接经济损失（万元）:");
        fflush(stdin);
        scanf("%f",&p->jingjisunshi);
        p->sgnext=NULL;              /**放空指向下一个同级信息结构的指针*/
        p->mtp=NULL;                 /**放空指向下一种级信息结构的指针*/
        ShiguAdd(p);               /**事故信息增加函数*/
        printf("\n输入下一个事故信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        size2++;          /**事故信息个数增加*/
    }
    while(ch=='Y'||ch=='y');
}


/**********************************************
 * 函数名称: ShiguAdd
 * 函数功能: 将新增的安全事故信息节点插入
              到内存缓冲区和十字链表中
 * 输入参数: SHIGU_NODE* p
 * 返 回 值: 无
 * 调用说明: 使用安全事故信息录入功能时，
              跟随ShiguCreate函数同时调用
 ***********************************************/
void ShiguAdd(SHIGU_NODE* p)    /**事故信息增加*/
{
    char ch='\0';
    int i=1;  /**若赋初值为0的话，当未录入事故信息时i为0，显示事故编号重复*/
    SHENGFEN_NODE *p1=head,*p2=head;
    SHIGU_NODE *pa=NULL,*pb=NULL;
    if(p1==NULL)    /**判断是否录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）（以上输入无效）");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'|| ch=='y')
            ShengfenCreate();    /**录入省份信息函数*/
    }
    else
    {
        for(; p2!=NULL; p2=p2->sfnext) /**两次循环判断事故编号有无重复*/
        {
            for(pb=p2->sgp; pb!=NULL; pb=pb->sgnext)
            {
                if(strcmp(pb->bianhao,p->bianhao)==0)  /**重复i=0 不重复i!=0*/
                    i=0;                       /**曾尝试直接用strcmp的返回值赋给i，经常会有bug，可能是因为如果不相同返回值会出现溢出，用if语句实现赋值更妥帖*/
            }
        }
        if(i!=0)
        {
            for(; (strcmp(p1->shengfen,p->shengfen)!=0)&&(p1->sfnext!=NULL); p1=p1->sfnext); /**寻找该省份的省份信息节点*/
            if(strcmp(p1->shengfen,p->shengfen)!=0)                    /**判sfnext为NULL时，它的省份是否相同*/
            {
                printf("\n###警告###");
                printf("\n还未录入这个省的监管信息，现在录入省份监管信息吗（Y/N）（以上输入无效）");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    ShengfenCreate();     /**录入省份信息函数*/
            }
            else
            {
                if(p1->sgp==NULL)     /**判断该省份是否已录有事故信息*/
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
            printf("\n###警告###");
            printf("\n事故编号重复，重新录入事故信息吗（Y/N）（以上输入无效）");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'|| ch=='y')
                ShiguCreate();     /**录入事故信息函数*/
        }

    }
}


/**********************************************
 * 函数名称: MeitiCreate
 * 函数功能: 将媒体报道信息录入到内存缓冲区
              和十字链表中
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 使用媒体报道信息录入功能时调用
 ***********************************************/
void MeitiCreate()    /**媒体信息录入*/
{
    char ch='\0';
    MEITI_NODE *p=NULL;
    do
    {
        fflush(stdin);
        p=(MEITI_NODE*)malloc(sizeof(MEITI_NODE));
        fflush(stdin);
        printf("\n事故编号：");
        fflush(stdin);
        scanf("%s",p->bianhao);
        printf("\n报道日期:");
        fflush(stdin);
        scanf("%s",p->baodaoriqi);
        printf("\n媒体类别（请输入‘1’、‘2’、‘3’或‘4’ ）:");
        fflush(stdin);
        scanf("%c",&p->meitileibie);
        printf("\n媒体名称:");
        fflush(stdin);
        scanf("%s",p->meitimingcheng);
        printf("\n内容索引:");
        fflush(stdin);
        scanf("%s",p->neirongsuoyin);
        p->mtnext=NULL;   /**放空指向下一个同级信息结构的指针*/
        MeitiAdd(p);      /**媒体信息增加函数*/
        printf("\n输入下一个媒体报道信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        size3++;         /**媒体信息个数增加*/
    }
    while(ch=='Y'||ch=='y');
}


/**********************************************
 * 函数名称: MeitiAdd
 * 函数功能: 将新增的媒体报道信息节点插入
              到内存缓冲区和十字链表中
 * 输入参数: MEITI_NODE* p
 * 返 回 值: 无
 * 调用说明: 使用媒体报道信息录入功能时，
              跟随MeitiCreate函数同时调用
 ***********************************************/
void MeitiAdd(MEITI_NODE* p)   /**媒体信息增加*/
{
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE *p2=NULL;
    MEITI_NODE *p3=NULL;
    int i=0;
    char ch='\0';
    if(p1==NULL)    /**判断是否录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）（以上输入无效）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext) /**找到对应的事故编号*/
        {
            p2=p1->sgp;
            for(; p2!=NULL; p2=p2->sgnext)
            {
                if(strcmp(p2->bianhao,p->bianhao)==0)
                {
                    i=1;
                    break;  /**找到则赋值1*/
                }
            }
            if(i!=0)
                break;
        }

        if(i!=0)     /**判sgnext为NULL时，i是否为1*/
        {
            if(p2->mtp==NULL)   /**判断该事故是否已录有媒体信息*/
            {
                p2->mtp=p;
                p->mtnext=NULL;
            }
            else
            {
                p3=p2->mtp;
                for(; (strcmp(p3->meitimingcheng,p->meitimingcheng)!=0)&&(p3->mtnext!=NULL); p3=p3->mtnext);
                if(strcmp(p3->meitimingcheng,p->meitimingcheng)!=0)    /**判断该媒体是否对此事件有过报道*/
                {

                    for(; p3->mtnext!=NULL; p3=p3->mtnext);
                    p3->mtnext=p;
                    p->mtnext=NULL;
                }
                else
                {
                    printf("\n###警告###");
                    printf("\n已录有%s对该事件的报道（以上输入无效）\n",p2->mtp->meitimingcheng);
                }
            }
        }
        else
        {
            printf("\n###警告###");
            printf("\n还未录入这个事故，现在录入事故信息吗（Y/N）（以上输入无效）\n");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'||ch=='y')
                ShiguCreate();     /**录入事故信息函数*/

        }

    }
}


/**********************************************
 * 函数名称: ShengfenModify
 * 函数功能: 修改省份监管信息的内容
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 寻找省份名称后修改其省份监管信息的
            内容，使用省份监管信息修改功能时调用
 ***********************************************/
void ShengfenModify()    /**省份信息修改*/
{
    SHENGFEN_NODE*p=head;
    char str[15],ch='\0';
    if(p==NULL)   /**检查是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        do
        {
            fflush(stdin);
            printf("\n请输入要修改的省份名称：");
            scanf("%s",str);
            for(; (strcmp(str,p->shengfen)!=0)&&(p->sfnext!=NULL); p=p->sfnext); /**循环寻找该省份名称*/
            if(strcmp(str,p->shengfen)==0)
            {
                fflush(stdin);
                printf("\n请输入新的负责人：");
                scanf("%s",p->fuzeren);
                printf("\n请输入新的联系电话：");
                fflush(stdin);
                scanf("%s",p->dianhua);
                printf("\n修改成功");
            }
            else
            {
                printf("\n###警告###");
                printf("\n还未录入该省份的信息，现在录入省份监管信息吗（Y/N）\n");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    ShengfenCreate();     /**录入省份信息函数*/
            }
            printf("\n继续修改吗（Y/N）");
            fflush(stdin);
            ch=getchar();
        }
        while(ch=='Y'||ch=='y');
    }
}


/**********************************************
 * 函数名称: ShiguModify
 * 函数功能: 修改安全事故信息的内容
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 寻找事故编号后修改其安全事故信息的
             内容，使用安全事故信息修改功能时调用
 ***********************************************/
void ShiguModify()         /**事故信息修改*/
{
    int i=0;
    char str[12];
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    char ch='\0';
    if(p1==NULL)     /**检查是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        printf("\n请输入要修改的事故编号：");
        fflush(stdin);
        scanf("%s",str);
        for(; p1!=NULL; p1=p1->sfnext)
        {
            p2=p1->sgp;
            if(p2==NULL)   /**p2为空执行下列语句的话，p2->bianhao会出错*/
                continue;
            for(; (p2->sgnext!=NULL)&&(strcmp(str,p2->bianhao)!=0); p2=p2->sgnext);
            if(strcmp(str,p2->bianhao)==0)  /**找到相同编号则开始修改*/
            {
                printf("\n请输入新的发生时间:");
                fflush(stdin);
                scanf("%s",p2->fashengshijian);
                printf("\n请输入新的事故类型:");
                fflush(stdin);
                scanf("%s",p2->leixing);
                printf("\n请输入新的事故等级（请输入‘1’、‘2’、‘3’或‘4’ ）:");
                fflush(stdin);
                scanf("%c",&p2->dengji);
                printf("\n请输入新的事故发生单位:");
                fflush(stdin);
                scanf("%s",p2->danwei);
                printf("\n请输入新的死亡人数:");
                fflush(stdin);
                scanf("%d",&p2->siwangrenshu);
                printf("\n请输入新的重伤人数:");
                fflush(stdin);
                scanf("%d",&p2->zhongshangrenshu);
                printf("\n请输入新的直接经济损失:");
                fflush(stdin);
                scanf("%f",&p2->jingjisunshi);
                printf("\n修改成功");
                system("pause");
                i=1;   /**执行上述语句后赋值1*/
            }

        }
        if(i==0) /**判断是否找到*/
        {
            printf("未找到要修改的事故信息");
            system("pause");
        }
    }
}


/**********************************************
 * 函数名称: MeitiModify
 * 函数功能: 修改媒体报道信息的内容
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 寻找事故编号和对该事故报道的媒体的
              名称后修改其媒体报道信息的内容，
              使用媒体报道信息修改功能时调用
 ***********************************************/
void MeitiModify()      /**媒体信息修改*/
{
    char str1[12],str2[20],ch='\0';
    int i=0,j=0;
    SHENGFEN_NODE*p=head;
    SHIGU_NODE *p1=NULL;
    MEITI_NODE *p2=NULL;
    if(p==NULL)      /**检查是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        printf("\n请输入要修改的事故编号:");
        fflush(stdin);
        scanf("%s",str1);
        printf("\n请输入对该事故报道的媒体的名称:");
        fflush(stdin);
        scanf("%s",str2);
        for(; p!=NULL; p=p->sfnext) /**遍历寻找相同的事故编号*/
        {
            for(p1=p->sgp; p1!=NULL; p1=p1->sgnext)
            {
                if(strcmp(p1->bianhao,str1)==0)  /**找到则赋值1*/
                {
                    i=1;
                }
                if(i!=0)
                    break;  /**找到则break*/
            }
            if(i!=0)
                break;   /**找到则break*/
        }
        if(i!=0)
        {
            p2=p1->mtp;
            if(p2==NULL)
            {
                printf("\n###警告###");
                printf("\n还未录入这个事故的媒体报道信息，现在录入媒体报道信息吗（Y/N）");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    MeitiCreate();     /**录入媒体信息函数*/
            }
            else
            {
                for(; p2!=NULL; p2=p2->mtnext)  /**第二次遍历寻找对其报道的媒体的名称*/
                {
                    if(strcmp(p2->meitimingcheng,str2)==0) /**找到则赋值1*/
                    {
                        j=1;
                    }
                    if(j!=0)
                        break;  /**找到则break*/
                }
                if(j!=0)  /**找到相同的媒体名称则开始修改*/
                {
                    printf("\n请输入新的报道日期:");
                    fflush(stdin);
                    scanf("%s",p2->baodaoriqi);
                    printf("\n请输入新的媒体类别:");
                    fflush(stdin);
                    scanf("%c",&p2->meitileibie);
                    printf("\n请输入新的内容索引:");
                    fflush(stdin);
                    scanf("%s",p2->neirongsuoyin);
                    printf("\n修改成功\n");
                    system("pause");
                }
                else
                {
                    printf("\n该媒体没有对这个事故进行报道，现在录入媒体报道信息吗（Y/N）");
                    fflush(stdin);
                    ch=getchar();
                    if(ch=='Y'||ch=='y')
                        MeitiCreate();     /**录入媒体信息函数*/
                }
            }
        }
        else
        {
            printf("\n###警告###");
            printf("还未录入这个编号的事故，现在录入安全事故信息吗（Y/N）\n");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y'||ch=='y')
                ShiguCreate();     /**录入事故信息函数*/
        }
    }
}


/**********************************************
 * 函数名称: ShengfenDelete
 * 函数功能: 删除省份监管信息节点以及和该省份
              监管信息相关的安全事故信息节点和
               媒体报道信息节点
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 寻找省份名称后删除省份监管信息节点
              以及和该省份监管信息相关的安全事故
              信息节点和媒体报道信息节点，使用省
              份监管信息删除功能时调用
 ***********************************************/
void ShengfenDelete()   /**省份信息删除*/
{
    char str[8],ch='\0';
    SHENGFEN_NODE*p1=head,*p2=NULL;
    SHIGU_NODE *p3=NULL,*p4=NULL;
    MEITI_NODE *p5=NULL,*p6=NULL;
    if(p1==NULL)  /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        printf("\n请输入要删除的省份名称：");
        fflush(stdin);
        scanf("%s",str);
        for(; (strcmp(p1->shengfen,str)!=0)&&(p1->sfnext!=NULL); p1=p1->sfnext) /**循环寻找匹配的省份*/
        {
            p2=p1;
        }  /**循环后p1为要删除的节点 p2为要删除的节点的前一个节点*/

        if(strcmp(p1->shengfen,str)==0) /**判断sfnext为NULL时 省份名称是否相同*/
        {
            printf("\n###警告###");   /**警告确认是否要删除*/
            printf("\n确认要删除省份信息（Y/N）（将会删除与之相关的事故信息和媒体信息）");
            fflush(stdin);
            ch=getchar();
            if(ch=='Y' || ch=='y')
            {
                if(p1==head)      /**删除的节点是否为头结点*/
                {
                    head=p1->sfnext;
                }
                else
                    p2->sfnext=p1->sfnext;

                p3=p1->sgp;
                while( p3!=NULL )   /**释放该省份节点的省份信息、事故信息和媒体信息*/
                {
                    p5=p3->mtp;
                    while(p5!=NULL)     /**一定要如下顺序p5先指向下一个节点在删除这个节点，否则先删除这个节点的话p5根本没有mtnext指针也就无法指向下一个节点，下面的删除函数也同理*/
                    {
                        p6=p5;
                        p5=p5->mtnext;
                        free(p6);
                    }
                    p4=p3;
                    p3=p3->sgnext;
                    free(p4);
                }
                free(p1);      /**删除该省份信息*/
                size1--;       /**省份信息个数减少*/
                printf("\n删除成功\n");
                system("pause");
            }
            else
            {
                printf("\n删除失败\n");
                system("pause");
            }
        }
        else
        {
            printf("\n###警告###");
            printf("\n未找到该省份的信息\n");
            system("pause");
        }
    }
}


/**********************************************
 * 函数名称: ShiguDelete
 * 函数功能: 删除安全事故信息节点以及和该安全
              事故信息相关的媒体报道信息节点
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 寻找省份名称和事故编号后删除安全事故
              信息节点以及和该安全事故信息相关媒体
              报道信息节点，使用安全事故信息删除
              功能时调用
 ***********************************************/
void ShiguDelete()    /**事故信息删除*/
{
    int i=0;
    char str1[12],str2[15],ch='\0';
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL,*p3=NULL;
    MEITI_NODE *p4=NULL,*p5=NULL;
    if(p1==NULL)  /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        printf("\n请输入要删除的事故所属的省份：");
        fflush(stdin);
        scanf("%s",str2);
        printf("\n请输入要删除的事故编号：");
        fflush(stdin);
        scanf("%s",str1);
        for(; (strcmp(str2,p1->shengfen)!=0)&&(p1!=NULL); p1=p1->sfnext);  /**遍历省份信息节点找到该省份*/
           for(p2=p1->sgp; (strcmp(str1,p2->bianhao)!=0)&&(p2->sgnext!=NULL); p2=p2->sgnext) /**在该省份的事故信息中遍历寻找该事故*/
            {
                p3=p2;
            }
              /**循环后p2为要删除的节点 p3为要删除的节点的前一个节点*/

            if(p2!=NULL)     /**判断p2是否为空*/
            {
                if(strcmp(str1,p2->bianhao)==0)
                i=1;              /**找到则赋值1*/
                if(i!=0)
                {
                    printf("\n###警告###");
                    printf("\n确认要删除事故信息（Y/N）（将会删除与之相关的媒体信息）");
                    fflush(stdin);
                    ch=getchar();
                    if(ch=='Y'||ch=='y')
                    {
                        if(p2==p1->sgp)   /**判断该事故是否为第一个*/
                        {
                            p4=p2->mtp;
                            while( p4!=NULL)  /**删除媒体信息*/
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
                            while( p4!=NULL)   /**删除媒体信息*/
                            {
                                p5=p4;
                                p4=p4->mtnext;
                                free(p5);
                            }
                            p3->sgnext=p2->sgnext;
                        }
                        free(p2);    /**删除该事故信息*/
                        size2--;     /**事故信息个数减少*/
                        printf("\n删除成功\n");
                        system("pause");
                    }
                    else
                    {
                        printf("\n删除失败\n");
                        system("pause");
                    }
                }
                else
                {
                    printf("\n未找到该事故信息\n");
                    system("pause");
                }
            }
            else
            {
                printf("\n###警告###");
                printf("\n还未录入事故的信息，现在录入安全事故信息吗（Y/N）\n");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                    ShiguCreate();     /**录入事故信息函数*/
            }
    }
}


/**********************************************
 * 函数名称: MeitiDelete
 * 函数功能: 删除媒体报道信息节点
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 寻找事故编号和对该事故报道的媒体的名称
              后删除媒体报道信息节点，使用媒体报道
              信息删除功能时调用
 ***********************************************/
void MeitiDelete()    /**媒体信息删除*/
{
    char str1[12],str2[20],ch='\0';
    int i=0,j=0;
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    MEITI_NODE *p3=NULL,*p4=NULL;
    if(p1==NULL)  /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }

    else
    {
        printf("\n请输入要删除事故编号：");
        scanf("%s",str1);
        printf("\n请输入要删除媒体名称：");
        scanf("%s",str2);
        getchar();
        for(; p1!=NULL; p1=p1->sfnext)  /**遍历寻找事故编号*/
        {
            for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
            {
                if(strcmp(p2->bianhao,str1)==0)  /**找到事故编号则赋值1*/
                {
                    i=1;
                    break;
                }
            }
            if(i!=0)  break;
        }
        if(i!=0)   /**是否找到事故编号*/
        {
            p3=p2->mtp;
            if(p3==NULL)  /**判断是否录有与该事故相关的媒体信息*/
            {
                printf("\n###警告###");
                printf("\n还未录入媒体对该事故的报道，现在录入媒体报道信息吗（Y/N）\n");
                fflush(stdin);
                ch=getchar();
                if(ch=='Y'||ch=='y')
                 MeitiCreate();     /**录入媒体信息函数*/
            }
            else
            {
                for(; p3!=NULL; p3=p3->mtnext)  /**遍历寻找媒体名称*/
                {
                    if(strcmp(p3->meitimingcheng,str2)==0)  /**找到相同的媒体编号则赋值1*/
                    {
                        j=1;
                        break;
                    }
                    p4=p3;
                }    /**循环后p3为要删除的节点 p4为要删除的节点的前一个节点*/
                if(j!=0)   /**是否找到媒体名称*/
                {
                   printf("\n###警告###");   /**警告确定是否删除*/
                   printf("\n确认要删除媒体信息（Y/N）");
                   fflush(stdin);
                   ch=getchar();
                   if(ch=='Y'||ch=='y')
                   {
                    if(p3==p2->mtp)   /**判断该媒体信息是否为第一个*/
                    {
                        p2->mtp=p3->mtnext;
                        free(p3);   /**删除该媒体信息*/
                        size3--;    /**媒体信息个数减少*/
                        printf("\n删除成功\n");
                        system("pause");
                    }
                    else
                    {
                        p4->mtnext=p3->mtnext;
                        free(p3);   /**删除该媒体信息*/
                        size3--;    /**媒体信息个数减少*/
                        printf("\n删除成功\n");
                        system("pause");
                    }

                  }
                  else
                  {
                      printf("\n删除失败\n");
                      system("pause");
                  }
                }
                else
                {
                    printf("\n###警告###");
                    printf("\n未找到该媒体对该事故的报道\n");
                    system("pause");
                }
            }
        }
        else
        {
            printf("\n###警告###");
            printf("\n未找到该事故编号\n");
            system("pause");
        }
    }
}


/**********************************************************************
 ****************************数据查询函数******************************
 ***********************************************************************/



/**********************************************
 * 函数名称: Query_shengfen
 * 函数功能: 查找省份监管信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 输入省份名称查找省份监管信息,使用
              查询省份监管信息时调用
 ***********************************************/
void Query_shengfen()  /**输入省份名称查找监管信息函数*/
{
    SHENGFEN_NODE* p1=head;
    char str[15],ch='\0';
    printf("\n请输入要查找的省份名称：\n");
    fflush(stdin);
    scanf("%s",str);
    if(p1==NULL) /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext)   /**遍历省份信息*/
        {
            if(strcmp(p1->shengfen,str)==0)  /**判断是否找到*/
            {
                printf("\n所属省份：  %s\n",p1->shengfen);
                printf("\n监管负责人：%s\n",p1->fuzeren);
                printf("\n联系电话：  %s\n",p1->dianhua);
                system("pause");
                break;  /**不可能有另一个结果 所以找到则break*/
            }

        }
        if(p1==NULL)
        {
            printf("\n###警告###");
            printf("\n没有您要找的省份信息\n");
            system("pause");
        }
    }
}


/**********************************************
 * 函数名称: Query_fuzeren
 * 函数功能: 查找省份监管信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 输入监管负责人名称查找省份监管
              信息,使用查询省份监管信息时调用
 ***********************************************/
void Query_fuzeren()
{
    SHENGFEN_NODE* p1=head;
    char str[15],ch='\0';
    printf("\n请输入要查找的监管负责人：\n");
    fflush(stdin);
    scanf("%s",str);
    if(p1==NULL)  /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(p1=head; p1!=NULL; p1=p1->sfnext) /**遍历寻找负责人*/
        {
            if(strcmp(p1->fuzeren,str)==0) /**是否找到负责人*/
            {
                printf("\n所属省份：%s\n",p1->shengfen);
                printf("\n监管负责人：%s\n",p1->fuzeren);
                printf("\n联系电话：%s\n",p1->dianhua);
                system("pause");
                break;
            }

        }
        if(p1==NULL)
        {
            printf("\n###警告###");
            printf("\n没有您要找的省份信息\n");
            system("pause");
        }

    }
}


/**********************************************
 * 函数名称: Query_bianhao
 * 函数功能: 查找安全事故信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 输入事故编号查找安全事故信息,使用
              查询安全事故信息时调用
 ***********************************************/
void Query_bianhao()
{
    int i=0;
    char str[12],ch='\0';
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE *p2=NULL;
    printf("\n请输入要查找的事故信息的编号：\n");
    fflush(stdin);
    scanf("%s",str);
    if(p1==NULL)  /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext) /**遍历寻找事故编号*/
        {
            p2=p1->sgp;
            if(p2!=NULL)
            {
                for(; strcmp(str,p2->bianhao)&&(p2->sgnext!=NULL); p2=p2->sgnext);
                if(p2!=NULL&&(strcmp(str,p2->bianhao)==0)) /**判断是否找到*/
                {
                    printf("\n事故编号:      %s\n",p2->bianhao);
                    printf("发生时间:      %s\n",p2->fashengshijian);
                    printf("事故类型:      %s\n",p2->leixing);
                    printf("事故等级:      %c\n",p2->dengji);
                    printf("所属省份:      %s\n",p2->shengfen);
                    printf("事故发生单位:  %s\n",p2->danwei);
                    printf("死亡人数:      %d\n",p2->siwangrenshu);
                    printf("重伤人数:      %d\n",p2->zhongshangrenshu);
                    printf("直接经济损失:  %f\n",p2->jingjisunshi);
                    system("pause");
                    i=1;  /**执行上述函数后赋值1表示已找到*/
                    break; /**只可能有一个结果 所以找到则不再循环*/
                }
            }
        }
        if(i==0) /**是否找到*/
                {
                    printf("没有您要找的事故信息");
                    system("pause");
                }
    }
}


/**********************************************
 * 函数名称: Query_leixing_shengfen
 * 函数功能: 查找安全事故信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 输入事故类型和所属省份查找安全事
              故信息,使用查询安全事故信息时调用
 ***********************************************/
void Query_leixing_shengfen()
{
    char str1[20],str2[15],ch='\0';
    int i=0;
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE * p2=NULL;
    printf("请输入要查找的事故信息的事故类型：\n");
    fflush(stdin);
    scanf("%s",str1);
    printf("请输入要查找的事故信息的所属省份：\n");
    fflush(stdin);
    scanf("%s",str2);
    if(p1==NULL) /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(; p1!=NULL&&(strcmp(p1->shengfen,str2)!=0); p1=p1->sfnext); /**遍历寻找匹配的省份*/
          if(p1!=NULL)
          {
            p2=p1->sgp;
            if(p2!=NULL)
            {
                for(; p2!=NULL; p2=p2->sgnext)  /**遍历寻找匹配的事故类型*/
                {
                 if(strcmp(p2->leixing,str1)==0) /**判断是否找到*/
                 {
                    printf("\n事故编号:       %s\n",p2->bianhao);
                    printf("发生时间:       %s\n",p2->fashengshijian);
                    printf("事故类型:       %s\n",p2->leixing);
                    printf("事故等级:       %c\n",p2->dengji);
                    printf("所属省份:       %s\n",p2->shengfen);
                    printf("事故发生单位:   %s\n",p2->danwei);
                    printf("死亡人数:       %d\n",p2->siwangrenshu);
                    printf("重伤人数:       %d\n",p2->zhongshangrenshu);
                    printf("直接经济损失:   %f\n",p2->jingjisunshi);
                    i=1;         /**执行上述函数后赋值1表示已找到*/
                    system("pause");
                    /**break; 此处不应break 因为可能出现多个查询结果*/
                 }
                }
            }
          }

        if(i==0) /**是否找到*/
        {
            printf("没有您要找的事故信息");
            system("pause");
        }
    }


}


/**********************************************
 * 函数名称: Query_bianhao_meiti
 * 函数功能: 查找媒体报道信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 输入事故编号和媒体名称查找媒体报
              道信息,使用查询媒体报道信息时调用
 ***********************************************/
void Query_bianhao_meiti()
{
    char str1[12],str2[20],ch='\0';
    int i=0;
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE * p2=NULL;
    MEITI_NODE * p3=NULL;
    printf("请输入要查询媒体信息的事故编号：\n");
    fflush(stdin);
    scanf("%s",str1);
    printf("请输入要查询媒体信息的媒体名称：\n");
    fflush(stdin);
    scanf("%s",str2);
    if(p1==NULL)   /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(p1=head; p1!=NULL; p1=p1->sfnext) /**遍历省份信息*/
        {
            p2=p1->sgp;
            if(p2!=NULL)
            {
                for(; (p2->sgnext!=NULL)&&strcmp(str1,p2->bianhao); p2=p2->sgnext); /**遍历至最后或找到匹配的事故编号*/
                if(strcmp(p2->bianhao,str1)==0)  /**判断是否找到*/
                {
                    p3=p2->mtp;
                    if(p3!=NULL)
                    {
                        for(; p3!=NULL; p3=p3->mtnext) /**遍历媒体信息*/
                        {
                            if(strcmp(str2,p3->meitimingcheng)==0)/**判断是否找到匹配的媒体名称*/
                            {
                                printf("\n事故编号:       %s\n",p3->bianhao);
                                printf("报道日期:       %s\n",p3->baodaoriqi);
                                printf("媒体类别:       %c\n",p3->meitileibie);
                                printf("媒体名称:       %s\n",p3->meitimingcheng);
                                printf("内容索引:       %s\n",p3->neirongsuoyin);
                                i=1;   /**执行上述函数后赋值1表示已找到*/
                                system("pause");
                                break;  /**查询的数据只可能有一个所以找到则break减少不必要的循环*/
                            }
                        }
                    }
                }
            }
        }
        if(i!=1)
        {
            printf("没有您要查找的媒体信息");
            system("pause");
        }
    }
}


/**********************************************
 * 函数名称: Query_riqi_meiti
 * 函数功能: 查找媒体报道信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 输入报到日期和媒体名称关键字查找
              媒体报道信息,使用查询媒体报道信
              息时调用
 ***********************************************/
void Query_riqi_meiti()
{
    char str1[12],str2[20],ch='\0';
    int i=0;
    SHENGFEN_NODE* p1=head;
    SHIGU_NODE * p2=NULL;
    MEITI_NODE * p3=NULL;
    printf("请输入所要查询媒体信息的报到日期：\n");
    fflush(stdin);
    scanf("%s",str1);
    printf("请输入所要查询媒体信息的媒体名称的关键字：\n");
    fflush(stdin);
    scanf("%s",str2);
    if(p1==NULL)   /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(; p1!=NULL; p1=p1->sfnext)  /**遍历省份信息--事故信息--媒体信息*/
        {
            for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
            {
                for(p3=p2->mtp; p3!=NULL; p3=p3->mtnext)
                {
                    if((strcmp(p3->baodaoriqi,str1)==0)&&(strstr(p3->meitimingcheng,str2)!=NULL)) /**判断是否有匹配的报到日期和媒体名称关键字*/
                    {
                        printf("\n事故编号:    %s\n",p3->bianhao);
                        printf("报道日期:    %s\n",p3->baodaoriqi);
                        printf("媒体类别:    %c\n",p3->meitileibie);
                        printf("媒体名称:    %s\n",p3->meitimingcheng);
                        printf("内容索引:    %s\n",p3->neirongsuoyin);
                        i=1;     /**执行上述函数后赋值1表示已找到*/
                        system("pause");
                        /**break; 同样在此处不可break，因为查询结果可能不止一个*/
                    }
                }
            }
        }
        if(i!=1)
        {
            printf("没有您要找的媒体信息");
            system("pause");
        }
    }
}



/**********************************************************************
 ****************************数据统计函数******************************
 ***********************************************************************/


/**********************************************
 * 函数名称: Stat_shengfen
 * 函数功能: 统计安全事故信息信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 统计历年来各省份安全事故发生数、
              死亡人数、重伤人数和直接经济损失
              ，按安全事故发生数降序排序后，
              输出统计结果。
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
    if(a1==NULL)  /**判断是否已录有省份信息*/
    {
        printf("\n###警告###");
        printf("\n还未录入省份信息，现在录入省份监管信息吗（Y/N）\n");
        fflush(stdin);
        ch=getchar();
        if(ch=='Y'||ch=='y')
            ShengfenCreate();     /**录入省份信息函数*/
    }
    else
    {
        for(; i!=size1; a1=a1->sfnext)    /**遍历省份信息*/
        {
            a=(TJONE *)malloc(sizeof(TJONE));   /**开辟空间*/
            strcpy(a->shengfen,a1->shengfen);   /**传入省份名称*/
            a->shigufashengshu=0;               /**初始化数据*/
            a->siwangrenshu=0;
            a->zhongshangrenshu=0;
            a->jingjisunshi=0;
            for(a2=a1->sgp; a2!=NULL; a2=a2->sgnext)  /**遍历*/
            {
                a->shigufashengshu++;      /**事故数增加*/
                a->siwangrenshu+=a2->siwangrenshu;       /**死亡人数累加*/
                a->zhongshangrenshu+=a2->zhongshangrenshu;    /**重伤人数累加*/
                a->jingjisunshi+=a2->jingjisunshi;      /**经济损失累加*/
            }
            a->next=ahead;  /**后进先出*/
            ahead=a;
            i++;
        }
        /**排序，参考c语言课本*/
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



        /**输出*/
        printf("\n统计信息如下：\n");
        printf("#########################################################\n");
        printf(" 省份   事故发生数   死亡人数   重伤人数   直接经济损失\n");
        for(a=ahead; a!=NULL; a=a->next)
            printf("%s          %d         %d           %d          %f\n",a->shengfen,a->shigufashengshu,a->siwangrenshu,a->zhongshangrenshu,a->jingjisunshi);
        printf("#########################################################\n");
        system("pause");
    }
}


/**********************************************
 * 函数名称: Stat_dengji
 * 函数功能: 统计安全事故信息信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 统计某年度全国发生的特大、重大、
            较大和一般四类等级安全事故发生数。
 ***********************************************/
void Stat_dengji()
{
    int a=0,b=0,c=0,d=0;
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    char m;
    char str[5];
    printf("请输入您要查询的年份：\n");
    fflush(stdin);
    scanf("%s",str);
    for(; p1!=NULL; p1=p1->sfnext)  /**遍历*/
    {
        for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
        {
            m=p2->dengji;
            if(!(strncmp(str,p2->fashengshijian,4))) /**寻找匹配的前四个字符（年份）*/
            {
                switch(m)   /**按等级分类累加*/
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
    /**输出*/
    printf("########################################\n");
    printf("*事故等级  特大    重大    较大    一般 \n");
    printf("*发生次数     %d       %d       %d       %d\n",a,b,c,d);
    printf("########################################\n");
    system("pause");
}


/**********************************************
 * 函数名称: Stat_siwangrenshu
 * 函数功能: 统计安全事故信息信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 统计各种类型安全事故发生数，按死
              亡人数降序排序后输出安全事故类型
              名称、事故发生总数、死亡总人数、
              重伤总人数和直接经济损失总额。
 ***********************************************/
void Stat_siwangrenshu()
{
    /**将13类事故放在数组中并初始化数据，加入空格是为了让输出时可以对其*/
    TJTHREE p[14]= {{"chudian       ",0,0,0,0},{"huozai        ",0,0,0,0},{"zhuotang      ",0,0,0,0},{"yanni         ",0,0,0,0},{"gaochuzhuiluo ",0,0,0,0},{"tanta         ",0,0,0,0},{"toushui       ",0,0,0,0},{"huoyaobaozha  ",0,0,0,0},{"wasibaozha    ",0,0,0,0},{"guolubaozha   ",0,0,0,0},{"qitabaozha    ",0,0,0,0},{"zhongduhezhixi",0,0,0,0},{"qitashanghai  ",0,0,0,0}};
    TJTHREE temp; /**排序时使用*/
    SHENGFEN_NODE*p1=head;
    SHIGU_NODE *p2=NULL;
    char *a[14]= {"chudian       ","huozai        ","zhuotang      ","yanni         ","gaochuzhuiluo ","tanta         ","toushui       ","huoyaobaozha  ","wasibaozha    ","guolubaozha  ","qitabaozha     ","zhongduhezhixi","qitashanghai  "};
    char str[20];
    int i,j;
    for(; p1!=NULL; p1=p1->sfnext)
    {
        for(p2=p1->sgp; p2!=NULL; p2=p2->sgnext)
        {
            strcpy(str,p2->leixing); /**传入事故类型数据*/

            if(strstr(a[0],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[0].shigufanshengshu++;                       /**发生次数增加*/
                p[0].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[0].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[0].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/
            }
            if(strstr(a[1],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[1].shigufanshengshu++;                       /**发生次数增加*/
                p[1].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[1].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[1].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[2],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[2].shigufanshengshu++;                       /**发生次数增加*/
                p[2].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[2].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[2].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[3],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[3].shigufanshengshu++;                       /**发生次数增加*/
                p[3].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[3].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[3].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[4],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[4].shigufanshengshu++;                        /**发生次数增加*/
                p[4].siwangrenshu+=p2->siwangrenshu;            /**死亡人数累加*/
                p[4].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[4].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[5],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[5].shigufanshengshu++;                       /**发生次数增加*/
                p[5].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[5].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[5].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[6],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[6].shigufanshengshu++;                       /**发生次数增加*/
                p[6].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[6].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[6].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[7],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[7].shigufanshengshu++;                       /**发生次数增加*/
                p[7].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[7].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[7].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[8],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[8].shigufanshengshu++;                       /**发生次数增加*/
                p[8].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[8].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[8].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[9],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[9].shigufanshengshu++;                       /**发生次数增加*/
                p[9].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[9].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[9].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[10],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[10].shigufanshengshu++;                       /**发生次数增加*/
                p[10].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[10].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[10].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[11],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[11].shigufanshengshu++;                       /**发生次数增加*/
                p[11].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[11].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[11].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
            if(strstr(a[12],str)) /**由于初始化数据里加入了很多空格所以用strstr函数而非strncmp*/
            {
                p[12].shigufanshengshu++;                       /**发生次数增加*/
                p[12].siwangrenshu+=p2->siwangrenshu;           /**死亡人数累加*/
                p[12].zhongshangrenshu+=p2->zhongshangrenshu;   /**重伤人数累加*/
                p[12].jingjisunshi+=p2->jingjisunshi;           /**经济损失累加*/

            }
        }
    }
    /**排序*/
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
    /**输出*/
    printf("统计信息如下:\n");
    printf("###############################################################################\n");
    printf("事故类型        事故发生数       死亡人数      重伤人数    直接经济损失（万元）\n");
    for(i=0; i<13; i++)
        printf("%s          %d             %d             %d          %f \n",p[i].leixing,p[i].shigufanshengshu,p[i].siwangrenshu,p[i].zhongshangrenshu,p[i].jingjisunshi);
    printf("###############################################################################\n");
    system("pause");

}


/**********************************************
 * 函数名称: Stat_top10
 * 函数功能: 统计媒体报道信息信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 统计媒体报道数最多的10次安全事故，
              按报道数降序排序后输出事故编号、
              事故类型、事故等级、所属省份和媒
              体报道次数。
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
    for(; a1!=NULL; a1=a1->sfnext)  /**遍历省份信息--事故信息*/
    {
        for(a2=a1->sgp; a2!=NULL; a2=a2->sgnext)
        {
            a=(TJFOUR *)malloc(sizeof(TJFOUR));   /**开辟空间*/
            strcpy(a->bianhao,a2->bianhao);       /**传入事故编号*/
            a->baodaocishu=0;                     /**初始化报道次数*/
            a->dengji=a2->dengji;                 /**传入事故等级*/
            strcpy(a->leixing,a2->leixing);       /**传入事故类型*/
            strcpy(a->shengfen,a2->shengfen);     /**传入省份名称*/
            for(a3=a2->mtp; a3!=NULL; a3=a3->mtnext)  /**遍历媒体信息统计报道次数*/
            {
                a->baodaocishu++;   /**报道次数增加*/
            }
            a->next=ahead;              /**后进先出*/
            ahead=a;
        }
    }
    /**排序，参考c语言课本*/
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

    /**输出*/
    printf("统计信息如下:\n");
    printf("##########################################################################\n");
    printf("事故编号       事故类型       事故等级       所属省份       媒体报道次数\n");
    for(i=0,a=ahead; (a!=NULL)&&(i<10); a=a->next)            /**i<10 输出前十位*/
    {

        printf("%s      %s        %c        %s        %d \n",a->bianhao,a->leixing,a->dengji,a->shengfen,a->baodaocishu);
        i++;
        printf("\n");
    }
    printf("##########################################################################\n");
    system("pause");


}


/**********************************************
 * 函数名称: Stat_top3
 * 函数功能: 统计省份监管信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 统计安全事故数最多的3个省份，
              按事故数降序排序后输出省份名称。
 ***********************************************/
void Stat_top3()
{
    int i=0;
    SHENGFEN_NODE*p=head;
    SHIGU_NODE *b=NULL;
    TJFIVE* a=NULL,*ahead=NULL;
    TJFIVE *prior1=NULL,*prior2=NULL,*p1=NULL,*p2=NULL,*t=NULL;
    a=ahead;
    /**录入*/
    for(; p!=NULL; p=p->sfnext)
    {
        a=(TJFIVE *)malloc(sizeof(TJFIVE));  /**开辟空间*/
        strcpy(a->shengfen,p->shengfen);     /**传入省份名称*/
        for(b=p->sgp; b!=NULL; b=b->sgnext) /**遍历统计事故发生数*/
        {
           a->shigufashengshu++;  /**事故发生数增加*/
        }
        a->next=ahead;   /**后进先出*/
        ahead=a;
    }
    /**排序，参考c语言课本*/
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
    /**输出*/
    printf("\n事故发生数最多的三个省是（按顺序排）");
    for(a=ahead; (i<3); a=a->next) /**i<3 输出前三省*/
    {
        printf("  %s",a->shengfen);
        i++;
    }
    printf("\n");
    system("pause");
}



/**********************************************************************
 ****************************其他功能函数******************************
 ***********************************************************************/


/**********************************************
 * 函数名称: Help
 * 函数功能: 显示使用说明
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 使用规则说明
 ***********************************************/
 void Help()
 {
    system("cls");
    printf("\n");
    printf("\t\t\t\t    帮    助\n\n");
    printf("\t  -------------------------------------------------------------\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   1.请按照省份信息--事故信息--媒体信息的顺序录入信息；    |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   2.需要录入中文的，请使用汉语拼音；                      |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   3.事故编号格式为'年+月+日+顺序编号'，如 20090222001，   |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    发生时间格式为'yyyymmdd-hh:mm'，事故类型限制为限制为触 |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    电、火灾、灼烫、淹溺、高处坠落、坍塌、透水、火药爆炸、 |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    瓦斯爆炸、锅炉爆炸、其他爆炸、中毒和窒息、其他伤害13种 |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    ， 事故等级限制为'1'、'2'、'3'、'4'四个等级分别对应特  |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    大、重大、较大和一般，直接经济损失单位为万元人民币，报 |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    道日期格式为'年+月+日'，媒体类别限制为'1'、'2'、'3'、  |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |    '4'  分别代表四大媒体：报纸、广播、电视和互联网；      |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |   4.默认一个省份只对应唯一的监管负责人，一次事故只对应唯  |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     一的事故编号，一个媒体不可重复对一次事故报道。        |\n");
    printf("\t  |                                                           |\n");
    printf("\t  -------------------------------------------------------------\n");
    getch();
 }


 /**********************************************
 * 函数名称: About
 * 函数功能: 显示关于作者和作品信息
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 使用显示关于作者和作品信息时调用
 ***********************************************/
void About()
{
    system("cls");
    printf("\n");
    printf("\t\t\t\t    关    于\n\n");
    printf("\t  -------------------------------------------------------------\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     编写日期：  2011年10月01日                            |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     作者信息：  计科1008班涂道宇                          |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     联系作者：  13971196561                               |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     辅导老师：  李开                                      |\n");
    printf("\t  |                                                           |\n");
    printf("\t  |     参考文献： 《C语言程序设计》曹计昌 著                 |\n");
    printf("\t  |                                                           |\n");
    printf("\t  -------------------------------------------------------------\n");
    getch();
}


/**********************************************
 * 函数名称: printall
 * 函数功能: 显示所有已录入内容
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 使用显示数据功能时调用，同时统计
              现录有各信息个数
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
        size1++;  /**省份信息数增加*/
        i++;      /**省份信息数增加*/
        /**输出*/
        printf("\n###########################省份监管信息 %d############################\n",i);
        printf("所属省份        %s\n监管负责人      %s\n联系电话        %s\n",p1->shengfen,p1->fuzeren,p1->dianhua);
        printf("#######################################################################\n");
        p2=p1->sgp;
        j=0;
        while (p2!=NULL)
        {
            size2++;  /**事故信息数增加*/
            j++;      /**与该省份相关的事故信息数增加*/
            /**输出*/
            printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@安全事故信息 %d@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n",j);
            printf("事故编号        %s\n发生时间        %s\n事故类型        %s\n事故等级        %c （1 2 3 4 四个等级分别对应特大、重大、较大和一般）\n所属省份        %s\n事故发生单位    %s\n死亡人数        %d\n重伤人数        %d\n直接经济损失    %f 万元\n",p2->bianhao,p2->fashengshijian,p2->leixing,p2->dengji,p2->shengfen,p2->danwei,p2->siwangrenshu,p2->zhongshangrenshu,p2->jingjisunshi);
            printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            p3=p2->mtp;
            k=0;
            while(p3!=NULL)
            {
                size3++;  /**媒体信息数增加*/
                k++;      /**与该事故相关的媒体信息数增加*/
                /**输出*/
                printf("\n***************************媒体报道信息 %d****************************\n",k);
                printf("事故编号        %s\n报道日期        %s\n媒体类别        %c （1 2 3 4 分别代表四大媒体：报纸、广播、电视和互联网）\n媒体名称        %s\n内容索引        %s\n",p3->bianhao,p3->baodaoriqi,p3->meitileibie,p3->meitimingcheng,p3->neirongsuoyin);
                printf("***********************************************************************\n");
                p3=p3->mtnext;
            }
            p2=p2->sgnext;
        }

        p1=p1->sfnext;
    }
}


/**********************************************
 * 函数名称: clear
 * 函数功能: 清楚已录入的数据
 * 输入参数: 无
 * 返 回 值: 无
 * 调用说明: 使用清除数据功能时调用
 ***********************************************/
void clear()
{
    head=NULL;
}


