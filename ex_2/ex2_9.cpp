//2017��1��1���������죬��2017���ĳһ�������ڼ���
# include<stdio.h>
main()
{
	int month,day,week;
	int totalday=0;
	printf("�������£��գ�\n");
	scanf("%d,%d",&month,&day);
	switch(month-1)
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
		case 0:totalday+=day;break; 
	 }
	 week=(totalday-1)%7;
	 printf("2017��%d��%d��������%d",month,day,week); 
} 
