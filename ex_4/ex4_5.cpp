//编程求两个自然数，其和是667，最小公倍数与最大公约数相比是120：1。
#include<stdio.h>
main()
{
	int m,n;
	int a=1,b;
	for(m=1;m<=333;m++)
	{
		n=667-m;
		for(a=m;a>=1;a--)
		if(m%a==0&&n%a==0)
		    {
		       b=m*n/a;
		        break;
	        }
	    if(b==120*a)
	    printf("答案是%d,%d\n",m,n);
    }
 } 
