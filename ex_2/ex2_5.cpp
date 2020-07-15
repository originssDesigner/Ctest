//计算以下分段函数的值，具体看第五题要求
#include<stdio.h>
#include<math.h>
main()
{
	float x,y;
	scanf("%f",&x);
	if(x<-1)
		y=-x-2;
	if(x>=-1&&x<=1)
		y=pow(x,1.0/3);
	if(x>1)
		y=-x+2;
	printf("%f",y);
}