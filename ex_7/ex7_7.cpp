//编写一个函数，该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。
//例如，假定输入的字符串为: asd asasdfg asd as zx67 asd mklo,子字符串为:as，则应输出6。 
#include <stdio.h> 
int fun(char *str,char *substr)
{	int n=0;
	char *p,*r;
	while(*str)  //判断字符串是否遇到结束字符
	{		p=str;
			r=substr;
			while(*r)  //判断子字符串是否遇到结束字符
				if(*r==*p)   //判断字符串中是否有与子字符串相同
				{	r++;
					p++;
				}
				else
					break;  
			if(*r=='\0')  //满足这个条件说明不是break出来的，也就是有与子字符串相同的字符串
				n++;
			str++;
	}
	return n;
}
main()
{
	int n;
	char str[]="asd asasdfg asd as zx67 asd mklo";
	char substr[]="as";
	n=fun(str,substr);
	printf("%d\n",n);
}

