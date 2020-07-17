//定义一个"日期"结构体（包括年、月、日），编程从键盘输入年(2018)、月、日，然后计算并输出该日是星期几。
//注意本题一定要用结构体实现，2018年1月1号是星期一。
#include<stdio.h>
struct date
{
	int y,m,d;
};
main()
{
	struct date d;
	int totalday=0, week,error=0;
	printf("输入时间：");
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
		printf("星期%d",week);
	}
}


