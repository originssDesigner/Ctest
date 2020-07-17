/*3、建立两个磁盘文件f1.dat和f2.dat，编程序实现以下工作：
	1)从键盘输入20个整数，分别存放在两个磁盘文件中（每个文件中放10个整数）；
	2)从f1.dat中读10个数，然后存放在f2.dat原有数据的后面；
*/
#include<stdio.h>
void fileread(char *filename,int *a,int len) //从文件读出数据放入数组a中
{	FILE * fp;
	fp = fopen(filename, "r");
	for(int i=0;i<len;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
}
void fileout(char *filename,int *a,int len)//数组a中的数据写入文件中
{	FILE * fp;
	fp = fopen(filename, "w");
	for(int i=0;i<len;i++)
		fprintf(fp,"%d ",a[i]);
	fclose(fp);
}
void fileappend(char *filename,int *a,int len)//数组a中的数据追加到文件中
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
