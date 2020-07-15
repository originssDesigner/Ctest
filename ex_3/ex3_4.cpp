//从键盘输入的字符中分别统计数字字符、小写字母和大写字母的个数，用换行符结束循环。
#include<stdio.h>
main()
{
	int a=0,b=0,c=0;
	char x;
	while(x!='\n')
	{
		scanf("%c",&x);
		if(x>=48&&x<=57)
		a=a+1;
		if(x>=65&&x<=90)
		b=b+1;
		if(x>=97&&x<=122)
		c=c+1;
	}
		printf("数字的个数为%d\n",a);
		printf("大写字母的个数为%d\n",b);
		printf("小写字母的个数为%d\n",c);
	
 } 
