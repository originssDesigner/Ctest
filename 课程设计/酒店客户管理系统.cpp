#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct date
{
	int m,d;
};//����ʱ��
typedef struct user
{
	char name[10];
	char num[20];
	char cal[15];
	char sex[2];
	date in;
	int rm;
}IN;//�û���ס��Ϣ
typedef struct import
{
	char num[20];//���֤��
	int  c;//�ۿ�
}vip;//��Ա��Ϣ
typedef struct house
{
	int type;
	int num;
	int bed;
	float sum;
}HS;//������Ϣ
typedef struct liver
{
	char num[20];
	int rm;
	date in,out;
	float sum;
}OUT;//�û��˷��Ǽ�
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

}//�û��Ǽ���ס
void inroom(HS*s,int n)
{
	for(int i=0;i<10;i++)
	{
		printf("�����%d��������Ϣ:",i+1);
		scanf("%d%d%d%f",&s[i].type,&s[i].num,&s[i].bed,&s[i].sum);
	}
}//�������
void outputin(OUT*s,IN*t)
{
	s->rm=t->rm;
	s->in.m=t->in.m;
	s->in.d=t->in.d;
	
}//�ͻ���ס���˷���Ϣ���
void putroom1(HS*room)
{
	for( int i=0;i<10;i++)
	{
		if(room[i].bed>0)
		{
		   	if(room[i].type==1)
			   	printf("         ��׼��   %d��(��ס%d��)    ���%fԪ\n",room[i].num,room[i].bed,room[i].sum);
		    if(room[i].type==2)
			   	printf("         �����   %d��(��ס%d��)    ���%fԪ\n",room[i].num,room[i].bed,room[i].sum);
		   	if(room[i].type==3)
			   	printf("         ������   %d��(��ס%d��)    ���%fԪ\n",room[i].num,room[i].bed,room[i].sum);
		}
		else
		{
		   	if(room[i].type==1)
		    	printf("         ��׼��   %d����\n",room[i].num);
		    if(room[i].type==2)
		    	printf("         �����   %d����\n",room[i].num);
		    if(room[i].type==3)
		    	printf("         ������   %d����\n",room[i].num);
		 }
	}
					
}//�������
void putroom2(HS*room,float n)
{
	for( int i=0;i<10;i++)
	{
		if(room[i].bed>0)
		{
		   	if(room[i].type==1)
			   	printf("         ��׼��   %d��(��ס%d��)    ���%fԪ\n",room[i].num,room[i].bed,n*room[i].sum);
		    if(room[i].type==2)
			   	printf("         �����   %d��(��ס%d��)    ���%fԪ\n",room[i].num,room[i].bed,n*room[i].sum);
		   	if(room[i].type==3)
			   	printf("         ������   %d��(��ס%d��)    ���%fԪ\n",room[i].num,room[i].bed,n*room[i].sum);
		}
		else
		{
		   	if(room[i].type==1)
		    	printf("         ��׼��   %d����\n",room[i].num);
		    if(room[i].type==2)
		    	printf("         �����   %d����\n",room[i].num);
		    if(room[i].type==3)
		    	printf("         ������   %d����\n",room[i].num);
		 }
	}
}//��Ա�������
					
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
}//ʱ�����
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
}//�����˷�ʱ��
void money(float m,int s,HS*room)
{
	float money=0;
	for(int i=0;i<10;i++)
	{
		if(room[i].num==s)
		{
			money=m*room[i].sum;
			printf("         ���û�ס���������Ϊ��%fԪ",money);
		}
	}
}//�������
void money_1(float m,int s,HS*room,float n)
{
	float money=0;
	for(int i=0;i<10;i++)
	{
		if(room[i].num==s)
		{
			money=m*room[i].sum;
			printf("         ���û��ǻ�Ա*ס���������Ϊ��%fԪ\n",n*money);
		}
	}
}//������ã���Ա��
void vin(vip*s,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("�����Ա����");
		scanf("%s",s[i].num);
		printf("�����Ա�ۿ�:");
		scanf("%d",&s[i].c);
	}
}//��Աע��
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
	printf("  ||                  2018��Ƶ�ͻ�����ϵͳ                || \n");
	printf("  ||                  1.�������                            || \n");
	printf("  ||                  2.�ͻ�ס���Ǽ�                        || \n");
	printf("  ||                  3.�ͻ��˷��ǼǼ��������              || \n");
	printf("  ||                  4.��Ա����                            ||\n");
	printf("   ----------------------------------------------------------\n");
	printf("   ----------------------------------------------------------\n");
	printf("\n");
	printf("\n");
	printf("��ѡ����Ӧѡ��\n");
	scanf("%d",&NUM);
	if(NUM==1)
	{
		system("cls");
B:
		printf("\n");
		printf("\n");
		printf("\n");
		printf("   -------------------------------------------------------------\n");
		printf("  |                      �������ϵͳ                          |\n");
		printf("  |             1.�ͷ�ԭʼ��Ϣ(��Ҫʱ����򿪣�                | \n");
		printf("  |             2.�޸Ŀͷ���Ϣ                                 |\n");
		printf("  |             3.�ͷ�Ŀǰʹ��״̬                             |\n");
		printf("  |             4.������һ����                                 | \n");
		printf("   -------------------------------------------------------------\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("ѡ�����ֲ����:");
		scanf("%d",&NUM1);
		if(NUM1==1)
		{
			FILE*fp;
			system("cls");
	        printf("              �˾Ƶ귿������Ϊ10\n");
			printf("ע��\n");
			printf("     ��������1����׼������������2�����񷿣���������3����������\n");
			printf("��������������ƶ���\n");
			printf("---------------------------------------------------------------\n");
        	printf("���뷿�������Ϣ���������ͣ�1.2.3�� ���� ���ĸ��� ��ס�������\n");
        	inroom(room,10);
			printf("\n");
			printf("������Ϣ¼��ɹ���\n");
			printf("������һ���棬������1\n");
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
			printf("�Ƿ��޸ģ�1.��   2.��");
			scanf("%d",&NUM2);
			if(NUM2==2)
			{
				system("cls");
			   	goto B;
			}
			if(NUM2==1)
			{
				system("cls");
				printf("���������޸ķ����:");
				scanf("%d",&num);
				for(i=0;i<10;i++)
				{
					if(room[i].num==num)
					{
			     		printf("�������µķ������ͣ�");
			    		scanf("%d",&room[i].type);
			    		printf("�������µķ��䴲����");
			    		scanf("%d",&room[i].bed);
			    		printf("�������µķ�����ã�");
			    		scanf("%f",&room[i].sum);
			    		printf("\n");
			    		printf("�޸ĳɹ���");
			    		printf("����������1\n");
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
			
			printf("�Ƿ��ǻ�Ա��\n");
			printf("1.��       2.��\n");
			scanf("%d",&NUM4);
			if(NUM4==1)
			{
				char nu[20];
				int find=1;float c;
				system("cls");
				printf("�����Ա���룺");
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
			    	printf("û�и��û���\n");
		    	printf("Ŀǰ����ʹ��״̬Ϊ:\n");
		    	printf("\n");
		    	printf("---------------------------------------------------------\n");
            	printf("        * ��������      * �������      * ������ã�ÿ�죩\n");
		    	putroom2(room,c);
		    	printf("\n");
		    	printf("\n");
		    	printf("����������1\n");
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
		    	printf("Ŀǰ����ʹ��״̬Ϊ:\n");
		    	printf("\n");
		    	printf("---------------------------------------------------------\n");
            	printf("        * ��������      * �������      * ������ã�ÿ�죩\n");
		    	putroom1(room);
		    	printf("\n");
		    	printf("\n");
		    	printf("����������1\n");
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
	    	printf("    |                1. ������ͻ���ס������Ϣ                 |\n");
	    	printf("    |                2. ������һ����                           |\n");
	    	printf("     ----------------------------------------------------------\n");
	    	printf("     ----------------------------------------------------------\n");
	    	scanf("%d",&n);
	    	if(n==1)
			{
				printf("��������ס����:\n");
				scanf("%d",&n);
				printf("����  ���֤��  ��ϵ�绰 �Ա� ��ס���� ��ס����\n");
				input(inuse,n,room);
			}
			printf("��ס�ɹ���\n");
			printf("\n");
			printf("\n");
			printf("  2.���� \n");
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
		printf("�����˷�������");
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			printf("                  *����ͻ����֤�ţ�");
		    scanf("%s",nu);
			for(i=0;i<10;i++)
			{
				if(strcmp(inuse[i].num,nu)==0)
				{
			    	outputin(&ouser[i],&inuse[i]);//������ס���˷���Ϣ�ں�
			        printf("                ���û��Ļ�����ϢΪ��\n");
			        printf("        ����    ��ס����     ��סʱ��\n");
		     	    printf("        %s         %d         %d��%d��\n",inuse[i].name,inuse[i].rm,inuse[i].in.m,inuse[i].in.d);
	    		    printf("       * ����ÿͻ����˷�ʱ�䣺");
		    		timeout(&ouser[i]);
	    			tolday=told(&ouser[i],room);
		    		printf("         ���û�һ��ס��%d��\n",tolday);
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
			printf("û�и��û���");
		}
			printf("�˷��ɹ���\n");
			printf("  1.���� \n");
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
		printf("                         1.��Աע��                   \n");
		printf("                         2.��Ա��Ϣ��ѯ               \n");
		printf("                         3.��Ա��Ϣ�޸�               \n");
		printf("                         4.������һ����               \n");
		printf("\n");
		printf("\n");
		printf("��ѡ��");
		scanf("%d",&NUM3);
		if(NUM3==1)
		{
			system("cls");
			printf("����ע��������");
    		scanf("%d",&n);
	    	vin(v,n);
			printf("ע��ɹ���\n");
			printf("  1.���� \n");
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
			printf("������һ�Ա���룺");
			scanf("%s",nu);
			for(i=0;i<10;i++)
			{
				if(strcmp(v[i].num,nu)==0)
				{
					printf("�ÿͻ������ۿ�Ϊ��%d��",v[i].c);
					find-=1;
				}
			}
			if(find==1)
				printf("û�и��û���\n");
			printf("  1.���� \n");
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
			printf("���������޸ĵĻ�Ա���룺");
			scanf("%s",nu);
			for(i=0;i<10;i++)
			{
				if(strcmp(v[i].num,nu)==0)
				{
					printf("�������µĻ�Ա�ۿۣ�\n");
					scanf("%d",&v[i].c);
				}
			}
			printf("�޸ĳɹ���\n");
			printf("  1.���� \n");
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
