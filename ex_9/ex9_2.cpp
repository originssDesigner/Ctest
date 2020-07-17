//从键盘输入一个字符串，把该字符串中的小写字母转换成大写字母，写到文件中，
//然后从该文件中读出整个字符串并输出出来。
#include<stdio.h>
#include<stdlib.h>
main()
{	char s[100],t[100],*p;
	FILE * fp;
	if( (fp=fopen("c:\\f1.txt","w+"))==NULL )
	{		printf("打开文件失败！\n");
				exit(1);
	}
	gets(s);  //从键盘输入一串字符串
	p=s;
	while(*p)     //将小写字母转换为大写字母
	{
			if(*p>='a'&&*p<='z')
				*p=*p-'a'+'A';
			p++;
	}
	fputs(s,fp); //转换后写入文件中
	rewind(fp);  //在读文件前，先把文件指针拨到文件头
	fgets(t,100,fp);//读出字符串放到t中
	puts(t);//输出读出的字符串
	fclose(fp);
}
