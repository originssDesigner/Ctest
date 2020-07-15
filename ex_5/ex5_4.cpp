//编写一个函数，将一个十进制数转换为二进制形式输出。
#include<stdio.h>
void f(int x)
{
	if(x/2!=0)
		f(x/2);
	printf("%d",x%2);
}
main()
{
	int x;
	printf("输入一位十进制整数:");
	scanf("%d",&x);
	printf("二进制数为:");
	f(x);
	printf("\n");
}