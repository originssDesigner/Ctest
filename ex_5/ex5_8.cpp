//编写一个函数用辗转法求二个数的最大公约数。要求用递归实现。然后编写一个主函数，求二个整数的最大公约数。
#include<stdio.h>
int gcd(int m,int n)
{	int t;
	if(m<n)
			t=m,m=n,n=t;
	if(m%n)
			return gcd(n,m%n);
	else
			return n;
}
main()
{	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",gcd(x,y));
}
