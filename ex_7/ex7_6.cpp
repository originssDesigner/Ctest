//编写一个函数，从一个字符串数组中寻找指定的一个字符串，若找到返回1，若找不到返回0。
#include<stdio.h>
void f(char *p,char*t)
{
	int i;
	for(i=0;*(p+i);i++)
		if(*t==*(p+i))
		{
			printf("s[%d]",i);
			break;
		}
}

main()
{
	char s[]="abcdef";
	char t;
	printf("输入字符：");
	scanf("%s",&t);
	f(s,&t);

}

