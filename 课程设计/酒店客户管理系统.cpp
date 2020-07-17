#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct date
{
	int m,d;
};//定义时间
typedef struct user
{
	char name[10];
	char num[20];
	char cal[15];
	char sex[2];
	date in;
	int rm;
}IN;//用户入住信息
typedef struct import
{
	char num[20];//身份证号
	int  c;//折扣
}vip;//会员信息
typedef struct house
{
	int type;
	int num;
	int bed;
	float sum;
}HS;//房间信息
typedef struct liver
{
	char num[20];
	int rm;
	date in,out;
	float sum;
}OUT;//用户退房登记
void input(IN*s,int n,HS*t)
{
	for(int i=0;i<n;i++)
	{
		scanf("%s%s%s%s%d%d%d",s[i].name,s[i].num,s[i].cal,s[i].sex,
		&s[i].in.m,&s[i].in.d,&s[i].rm);
		for(int j=0;j<10;j++)
		{
			if(s[i].rm==t[j].num)
				t[j].bed-=1;
		}
	}

}//用户登记入住
void inroom(HS*s,int n)
{
	for(int i=0;i<10;i++)
	{
		printf("输入第%d个房间信息:",i+1);
		scanf("%d%d%d%f",&s[i].type,&s[i].num,&s[i].bed,&s[i].sum);
	}
}//房间存入
void outputin(OUT*s,IN*t)
{
	s->rm=t->rm;
	s->in.m=t->in.m;
	s->in.d=t->in.d;
	
}//客户入住与退房信息结合
void putroom1(HS*room)
{
	for( int i=0;i<10;i++)
	{
		if(room[i].bed>0)
		{
		   	if(room[i].type==1)
			   	printf("         标准间   %d号(可住%d人)    金额%f元\n",room[i].num,room[i].bed,room[i].sum);
		    if(room[i].type==2)
			   	printf("         商务间   %d号(可住%d人)    金额%f元\n",room[i].num,room[i].bed,room[i].sum);
		   	if(room[i].type==3)
			   	printf("         豪华间   %d号(可住%d人)    金额%f元\n",room[i].num,room[i].bed,room[i].sum);
		}
		else
		{
		   	if(room[i].type==1)
		    	printf("         标准间   %d号满\n",room[i].num);
		    if(room[i].type==2)
		    	printf("         商务间   %d号满\n",room[i].num);
		    if(room[i].type==3)
		    	printf("         豪华间   %d号满\n",room[i].num);
		 }
	}
					
}//房间输出
void putroom2(HS*room,float n)
{
	for( int i=0;i<10;i++)
	{
		if(room[i].bed>0)
		{
		   	if(room[i].type==1)
			   	printf("         标准间   %d号(可住%d人)    金额%f元\n",room[i].num,room[i].bed,n*room[i].sum);
		    if(room[i].type==2)
			   	printf("         商务间   %d号(可住%d人)    金额%f元\n",room[i].num,room[i].bed,n*room[i].sum);
		   	if(room[i].type==3)
			   	printf("         豪华间   %d号(可住%d人)    金额%f元\n",room[i].num,room[i].bed,n*room[i].sum);
		}
		else
		{
		   	if(room[i].type==1)
		    	printf("         标准间   %d号满\n",room[i].num);
		    if(room[i].type==2)
		    	printf("         商务间   %d号满\n",room[i].num);
		    if(room[i].type==3)
		    	printf("         豪华间   %d号满\n",room[i].num);
		 }
	}
}//会员房间输出
					
void timeout(OUT*s)
{
	scanf("%d%d",&s->out.m,&s->out.d);
}
int day(int a,int b)
{
	int tolday=0;
	switch(a)
	{
	case 12:tolday+=30;
	case 11:tolday+=31;
	case 10:tolday+=30;
	case 9:tolday+=31;
	case 8:tolday+=31;
	case 7:tolday+=30;
	case 6:tolday+=31;
	case 5:tolday+=30;
	case 4:tolday+=31;
	case 3:tolday+=28;
	case 2:tolday+=31;
	case 1:tolday+=b;break;
	}
	return tolday;
}//时间计算
int told(OUT*s,HS*t)
{
	int tol;
	tol=day(s->out.m,s->out.d)-day(s->in.m,s->in.d);
	for(int j=0;j<10;j++)
	{
		if(s->rm==t[j].num)
				t[j].bed+=1;
	}
			
	return tol;
}//输入退房时间
void money(float m,int s,HS*room)
{
	float money=0;
	for(int i=0;i<10;i++)
	{
		if(room[i].num==s)
		{
			money=m*room[i].sum;
			printf("         该用户住房所需费用为：%f元",money);
		}
	}
}//结算费用
void money_1(float m,int s,HS*room,float n)
{
	float money=0;
	for(int i=0;i<10;i++)
	{
		if(room[i].num==s)
		{
			money=m*room[i].sum;
			printf("         该用户是会员*住房所需费用为：%f元\n",n*money);
		}
	}
}//结算费用（会员）
void vin(vip*s,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("输入会员号码");
		scanf("%s",s[i].num);
		printf("输入会员折扣:");
		scanf("%d",&s[i].c);
	}
}//会员注册
main()
{
	vip v[10];
	IN inuse[10];
	HS room[10],room1[10];
	OUT ouser[10];
	int i,tolday=0,NUM,n,NUM1,NUM2,NUM3,NUM4;
A:	printf("\n");
	printf("\n");
	printf("\n");
	printf("   ----------------------------------------------------------\n");
	printf("   ----------------------------------------------------------\n");
	printf("  ||                  2018年酒店客户管理系统                || \n");
	printf("  ||                  1.房间管理                            || \n");
	printf("  ||                  2.客户住房登记                        || \n");
	printf("  ||                  3.客户退房登记及结算费用              || \n");
	printf("  ||                  4.会员管理                            ||\n");
	printf("   ----------------------------------------------------------\n");
	printf("   ----------------------------------------------------------\n");
	printf("\n");
	printf("\n");
	printf("请选择相应选项\n");
	scanf("%d",&NUM);
	if(NUM==1)
	{
		system("cls");
B:
		printf("\n");
		printf("\n");
		printf("\n");
		printf("   -------------------------------------------------------------\n");
		printf("  |                      房间管理系统                          |\n");
		printf("  |             1.客房原始信息(必要时请勿打开）                | \n");
		printf("  |             2.修改客房信息                                 |\n");
		printf("  |             3.客房目前使用状态                             |\n");
		printf("  |             4.返回上一界面                                 | \n");
		printf("   -------------------------------------------------------------\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("选择数字并输出:");
		scanf("%d",&NUM1);
		if(NUM1==1)
		{
			FILE*fp;
			system("cls");
	        printf("              此酒店房间总数为10\n");
			printf("注：\n");
			printf("     房间类型1：标准房；房间类型2：商务房；房间类型3：豪华房；\n");
			printf("请根据需求自行制定：\n");
			printf("---------------------------------------------------------------\n");
        	printf("输入房间基本信息：房间类型（1.2.3） 房号 床的个数 入住所需费用\n");
        	inroom(room,10);
			printf("\n");
			printf("房间信息录入成功！\n");
			printf("返回上一界面，请输入1\n");
			scanf("%d",&n);
			if(n==1)
			{
				system("cls");
				goto B;
			}
		}
		if(NUM1==2)
		{
			int num;
			system("cls");
			printf("是否修改？1.是   2.否");
			scanf("%d",&NUM2);
			if(NUM2==2)
			{
				system("cls");
			   	goto B;
			}
			if(NUM2==1)
			{
				system("cls");
				printf("输入所需修改房间号:");
				scanf("%d",&num);
				for(i=0;i<10;i++)
				{
					if(room[i].num==num)
					{
			     		printf("请输入新的房间类型：");
			    		scanf("%d",&room[i].type);
			    		printf("请输入新的房间床数：");
			    		scanf("%d",&room[i].bed);
			    		printf("请输入新的房间费用：");
			    		scanf("%f",&room[i].sum);
			    		printf("\n");
			    		printf("修改成功！");
			    		printf("返回请输入1\n");
			    		scanf("%d",&n);
				    	if(n==1)
						{
			             	system("cls");
			            	goto B;
						}
					}
				}
			}
		}
		if(NUM1==3)
		{   
			
			printf("是否是会员？\n");
			printf("1.是       2.否\n");
			scanf("%d",&NUM4);
			if(NUM4==1)
			{
				char nu[20];
				int find=1;float c;
				system("cls");
				printf("输入会员号码：");
		    	scanf("%s",nu);
		    	for(i=0;i<10;i++)
				{
			    	if(strcmp(v[i].num,nu)==0)
					{
			    		c=v[i].c*0.1;
			    		find-=1;
					}
				}
		    	if(find==1)
			    	printf("没有该用户！\n");
		    	printf("目前房间使用状态为:\n");
		    	printf("\n");
		    	printf("---------------------------------------------------------\n");
            	printf("        * 房间类型      * 房间号码      * 房间费用（每天）\n");
		    	putroom2(room,c);
		    	printf("\n");
		    	printf("\n");
		    	printf("返回请输入1\n");
		    	scanf("%d",&n);
		    	if(n==1)
				{
		    		system("cls");
		    	 	goto B;
				}
			}
			if(NUM4==2)
			{
		    	system("cls");
		    	printf("目前房间使用状态为:\n");
		    	printf("\n");
		    	printf("---------------------------------------------------------\n");
            	printf("        * 房间类型      * 房间号码      * 房间费用（每天）\n");
		    	putroom1(room);
		    	printf("\n");
		    	printf("\n");
		    	printf("返回请输入1\n");
		    	scanf("%d",&n);
		    	if(n==1)
				{
		    		system("cls");
		    	 	goto B;
				}
			}
		}
		if(NUM1==4)
		{
			system("cls");
			goto A;
		}
	}
		if(NUM==2)
		{
	    	system("cls");
	    	printf("\n");
	    	printf("\n");
	    	printf("     ----------------------------------------------------------\n");
	    	printf("     ----------------------------------------------------------\n");
	    	printf("    |                1. 请输入客户入住基本信息                 |\n");
	    	printf("    |                2. 返回上一界面                           |\n");
	    	printf("     ----------------------------------------------------------\n");
	    	printf("     ----------------------------------------------------------\n");
	    	scanf("%d",&n);
	    	if(n==1)
			{
				printf("请输入入住人数:\n");
				scanf("%d",&n);
				printf("姓名  身份证号  联系电话 性别 入住日期 入住房号\n");
				input(inuse,n,room);
			}
			printf("入住成功！\n");
			printf("\n");
			printf("\n");
			printf("  2.返回 \n");
			scanf("%d",&n);
			if(n==2)
			{
		    	system("cls");
		    	goto A;
			}
		}
	if(NUM==3)
	{ 
		system("cls");
		int find=1;
		float sum,c;
		char nu[20];
		printf("输入退房人数：");
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			printf("                  *输入客户身份证号：");
		    scanf("%s",nu);
			for(i=0;i<10;i++)
			{
				if(strcmp(inuse[i].num,nu)==0)
				{
			    	outputin(&ouser[i],&inuse[i]);//进行入住，退房信息融合
			        printf("                该用户的基本信息为：\n");
			        printf("        姓名    入住房间     入住时间\n");
		     	    printf("        %s         %d         %d月%d日\n",inuse[i].name,inuse[i].rm,inuse[i].in.m,inuse[i].in.d);
	    		    printf("       * 输入该客户的退房时间：");
		    		timeout(&ouser[i]);
	    			tolday=told(&ouser[i],room);
		    		printf("         该用户一共住了%d天\n",tolday);
		    		money(tolday,ouser[i].rm,room);
					for(i=0;i<10;i++)
					{
		        		if(strcmp(v[i].num,nu)==0)
						{
			        		c=v[i].c*0.1;
							money_1(tolday,ouser[i].rm,room,c);
						}
					}
					find-=1;
				}
			}
			if(find==1)
			printf("没有该用户！");
		}
			printf("退房成功！\n");
			printf("  1.返回 \n");
			scanf("%d",&n);
			if(n==1)
			{
		    	system("cls");
		    	goto A;
			}
	}
	if(NUM==4)
	{
C:      system("cls");
		printf("       ---------------------------------------------  \n");
		printf("                         1.会员注册                   \n");
		printf("                         2.会员信息查询               \n");
		printf("                         3.会员信息修改               \n");
		printf("                         4.返回上一界面               \n");
		printf("\n");
		printf("\n");
		printf("请选择：");
		scanf("%d",&NUM3);
		if(NUM3==1)
		{
			system("cls");
			printf("输入注册人数：");
    		scanf("%d",&n);
	    	vin(v,n);
			printf("注册成功！\n");
			printf("  1.返回 \n");
			scanf("%d",&n);
			if(n==1)
			{
		    	system("cls");
		    	goto C;
			}
		}
		if(NUM3==2)
		{
			char nu[20];int find=1;
			printf("输入查找会员号码：");
			scanf("%s",nu);
			for(i=0;i<10;i++)
			{
				if(strcmp(v[i].num,nu)==0)
				{
					printf("该客户所打折扣为：%d折",v[i].c);
					find-=1;
				}
			}
			if(find==1)
				printf("没有该用户！\n");
			printf("  1.返回 \n");
			scanf("%d",&n);
			if(n==1)
			{
		    	system("cls");
		    	goto C;
			}
		}
		if(NUM3==3)
		{
			char nu[20];
			printf("输入所需修改的会员号码：");
			scanf("%s",nu);
			for(i=0;i<10;i++)
			{
				if(strcmp(v[i].num,nu)==0)
				{
					printf("请输入新的会员折扣：\n");
					scanf("%d",&v[i].c);
				}
			}
			printf("修改成功！\n");
			printf("  1.返回 \n");
			scanf("%d",&n);
			if(n==1)
			{
		    	system("cls");
		    	goto C;
			}
		}
		if(NUM3==4)
		{
			system("cls");
		    goto A;
		}

	}
}
