//����һ��"����"�ṹ�壨�����ꡢ�¡��գ�����̴Ӽ���������(2018)���¡��գ�Ȼ����㲢������������ڼ���
//ע�Ȿ��һ��Ҫ�ýṹ��ʵ�֣�2018��1��1��������һ��
#include<stdio.h>
struct date
{
	int y,m,d;
};
main()
{
	struct date d;
	int totalday=0, week,error=0;
	printf("����ʱ�䣺");
	scanf("%d%d%d",&d.y,&d.m,&d.d);
	switch((d.m)-1)
	{
	case 11:totalday+=30;
	case 10:totalday+=31;
	case 9:totalday+=30;
	case 8:totalday+=31;
	case 7:totalday+=31;
	case 6:totalday+=30;
	case 5:totalday+=31;
	case 4:totalday+=30;
	case 3:totalday+=31;
	case 2:totalday+=28;
	case 1:totalday+=31;
	case 0:totalday+=d.d;break;
	default:printf("error");
		error=1;
	}
	if(error==0)
	{
		week=totalday%7;
		printf("����%d",week);
	}
}


