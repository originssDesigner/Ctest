//编写一个判断一整数是否为素数的函数，然后编写主函数输出100以内素数。
#include<stdio.h>
int f(int x)
{
	int i;
	for(i=2;i<=x;i++)
	{
		if(i==x)
			return 1;
		if(x%i==0)
			return 0;
	}
}
main()
{
	int test=0;
	scanf("%d",&test);
	if(f(test)==1)
	{
		printf("yes\n");
	}
	else
		printf("no\n");
	int x;
	printf("100以内的素数为:");
	for(x=2;x<100;x++)
	{
		if(f(x)==1)
			printf("%d  ",x);
	}
	printf("\n");
}