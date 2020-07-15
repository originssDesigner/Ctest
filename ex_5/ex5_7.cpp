//编写一个函数用辗转法求二个数的最大公约数。然后编写一个主函数，求
//二个整数的最大公约数。
#include<stdio.h>
int f(int x,int y)
{
	int m;
	while(y!=0)
	{
		m=x%y;
		x=y;
		y=m;
	}
	return x;
}
main()
{
	int x,y;
	printf("输入两个整数:");
	scanf("%d%d",&x,&y);
	printf("两个整数的最大公约数为:");
	printf("%d",f(x,y));
}
