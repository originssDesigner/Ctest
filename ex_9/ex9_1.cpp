// 从键盘输入一个个字符直到回车换行为至，存入文件中，然后将其从文件中一一读出并输出。
#include<stdio.h>
#include<stdlib.h>
main()
{	char ch;
	FILE * fp;
	if( (fp=fopen("c:\\f1.txt","w+"))==NULL ) 
//不只是写还要读，所以要用即可读又可写（+）的方式打开
	{		printf("打开文件失败！\n");
				exit(1);
	}
	while( (ch=getchar())!='\n' )
			fputc(ch,fp);
	rewind(fp);  //要读文件时，把文件指针拨到文件头
	while( !feof(fp) )
	{
			ch=fgetc(fp);
			putchar(ch);
	}
	fclose(fp);
}
