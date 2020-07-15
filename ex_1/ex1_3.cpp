//从键盘输入一个小写字母，输出该小写字母的ASCII码值和该小写字母对应的大写字母。
#include<stdio.h>
main()
{
	char c1,c2;
	scanf("%c",&c1);
	c2=c1-('a'-'A');
	printf("%d\n",c1);
	printf("%c\n",c2);
}