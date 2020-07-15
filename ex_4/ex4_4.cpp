//请求出一个整数的反序数。
#include<stdio.h>
main()
{
	int a,m;
	int i;
	scanf("%d",&a);
	    while(a!=0)
    {
		
		if(m=a%10)
		printf("%d",m);
		a=a/10; 
	}
} 
