//编写一个求xn的函数，然后编写主函数求1+2+22+23+…+263的值。
#include<stdio.h>
double f(int x,int y)
{
	int i;
	double s=1,p=1;
	for(i=1;i<=y;i++)
	{
		p*=x;
		s=s+p;
	}
	return s;
}
main()
{
	int n=63;
	int x=2;
	printf("%lf",f(x,n));
}
