//求五个整数中的最大值。
#include<stdio.h>
main()
{
	int x,x1,x2,x3,x4,x5;
	scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
	if(x1>x2)
		x=x1;
	else
		x=x2;
	if(x<x3)
		x=x3;
	if(x<x4)
		x=x4;
	if(x<x5)
		x=x5;
	printf("%d",x);

}