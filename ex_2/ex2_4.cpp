//键盘输入一个字符，判断该字符是字母、数字、还是其它字符。
#include<stdio.h>
main()
{
	char x;
	scanf("%c",&x);
	if(x>=65&&x<=90||x>=97&&x<=122)
		printf("字母");
	   if(x>=48&&x<=54)
		   printf("数字");
	else
		printf("其它字符");
}