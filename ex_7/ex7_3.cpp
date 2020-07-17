//编写一个函数，实现一个字符串的翻转。再编写一个主函数实现主函数中一个字符串的翻转。
#include<stdio.h>
void f(char*p)
{
	int t;
	int i,len=0;
	for(i=0;*(p+i);i++)
		len++;
	for(i=0;i<len/2;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+len-i-1);
		*(p+len-i-1)=t;
	}
}
main()
{
	char s[]="abcdef";
	f(s);
	puts(s);
}