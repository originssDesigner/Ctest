//用二分法求方程x2-3=0的根，要求用递归方法来实现。
#include<stdio.h>
#include<math.h>
double f(double x){	return x*x-3;}
double root(double a,double b)
{	double x = (a+b)/2;
	if(fabs(f(x))<1e-6)
			return x;
	else
 			if(f(x)>0)
		    	return root(a,x);
	    else 
				return root(x,b);
}
main()
{	double x=root(0,5);
	printf("f(%lf)=%lf\n",x,f(x));
}
