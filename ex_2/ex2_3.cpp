//判断一个三位整数是否为水仙花数，
//水仙花数是指一个 n 位数 ( n≥3 )，它的每个位上的数字的 n 次幂之和等于它本身。
//（例如：13 + 53+ 33 = 153）
#include<stdio.h>
main()
{
	int a,b,c,m;
	scanf("%d",&m);
	a=m/100;
	b=m%100/10;
	c=m%10;
	if(a*a*a+b*b*b+c*c*c==a*100+b*10+c)
		printf("yes\n");
	else
		printf("NO");
}