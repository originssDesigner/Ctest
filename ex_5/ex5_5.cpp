//用二分法求方程x2-3=0的根。
#include<stdio.h>
double f(double x)
{
	return x*x-3;
}
main()
{
	int i;int x;
	double x0,x1,x2;
	do
	{
		scanf("%lf%lf",&x1,&x2);
	}
		while(f(x1)*f(x2)>0);
		printf("输入循环次数:");
		scanf("%d",&x);
		for(i=1;i<=x;i++)
		{
			x0=(x1+x2)/2;
			if(f(x1)*f(x2)>0)
				x1=x0;
			else
				x2=x0;
			printf("%lf\n",x0);
		}
}