/*3���������������ļ�f1.dat��f2.dat�������ʵ�����¹�����
	1)�Ӽ�������20���������ֱ��������������ļ��У�ÿ���ļ��з�10����������
	2)��f1.dat�ж�10������Ȼ������f2.datԭ�����ݵĺ��棻
*/
#include<stdio.h>
void fileread(char *filename,int *a,int len) //���ļ��������ݷ�������a��
{	FILE * fp;
	fp = fopen(filename, "r");
	for(int i=0;i<len;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
}
void fileout(char *filename,int *a,int len)//����a�е�����д���ļ���
{	FILE * fp;
	fp = fopen(filename, "w");
	for(int i=0;i<len;i++)
		fprintf(fp,"%d ",a[i]);
	fclose(fp);
}
void fileappend(char *filename,int *a,int len)//����a�е�����׷�ӵ��ļ���
{	FILE * fp;
	fp = fopen(filename, "a");
	for(int i=0;i<len;i++)
		fprintf(fp,"%d ",a[i]);
	fclose(fp);
}
main()
{	int a[10],b[10],c[20],t[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	fileout("c:\\f1.dat",a,10);
	fileout("c:\\f2.dat",b,10);
	fileread("c:\\f1.dat",t,10);
	fileappend("c:\\f2.dat",t,10);
	fileread("c:\\f2.dat",c,20);
	fileout("c:\\f2.dat",c,20);
}
