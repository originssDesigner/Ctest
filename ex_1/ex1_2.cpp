//定义二个整数变量，由键盘输入两个变量的值，编程实现交换这两个变量的值，然后输出。
#include<stdio.h>
main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}