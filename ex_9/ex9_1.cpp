// �Ӽ�������һ�����ַ�ֱ���س�����Ϊ���������ļ��У�Ȼ������ļ���һһ�����������
#include<stdio.h>
#include<stdlib.h>
main()
{	char ch;
	FILE * fp;
	if( (fp=fopen("c:\\f1.txt","w+"))==NULL ) 
//��ֻ��д��Ҫ��������Ҫ�ü��ɶ��ֿ�д��+���ķ�ʽ��
	{		printf("���ļ�ʧ�ܣ�\n");
				exit(1);
	}
	while( (ch=getchar())!='\n' )
			fputc(ch,fp);
	rewind(fp);  //Ҫ���ļ�ʱ�����ļ�ָ�벦���ļ�ͷ
	while( !feof(fp) )
	{
			ch=fgetc(fp);
			putchar(ch);
	}
	fclose(fp);
}
