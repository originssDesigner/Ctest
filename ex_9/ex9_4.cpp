//����һ��ѧ���ṹ�壬���а���ѧ����ѧ�š�������3�ſγ̵ĳɼ���
//ѧ�������ڶ���ṹ�����ʱֱ�ӳ�ʼ����Ȼ��ѧ�������Զ����Ʒ�ʽд�������ļ��С�
//����һ������fun���书�����޸��β�filename��ָ�ļ������һ��ѧ�������ݣ������µ�ѧ�����ݸ��Ǹ�ѧ��ԭ�������ݣ�����ѧ�������ݲ��䡣
#include<stdio.h>
typedef
struct stu
{
	char no[10];
	char name[7];
	int c;
	int  m;
	int e;
}STU;
 void  fun(struct stu t)
{
	FILE*fp;
	fp=fopen("d:\\c++\\studata.txt","rb+");
	fseek(fp,-1*sizeof(STU),2);
	fwrite(&t,sizeof(STU),1,fp);
	fclose(fp);
}
main()
{
	STU a[3]={{"01","aaa",100,100,100},{"02","bbb",90,90,90},{"03","ccc",80,80,80}};
	FILE*fp;
	fp=fopen("d:\\c++\\studata.txt","wb");
	fwrite(a,sizeof(STU),3,fp);
	fclose(fp);
	STU t;
	FILE*fq;
	scanf("%s%s%d%d%d",t.no,t.name,&t.c,&t.m,&t.e);
	fun(t);
	fq=fopen("d:\\c++\\studata.txt","rb");
	fseek(fq,-1*sizeof(STU),2);
	fread(&t,sizeof(STU),1,fq);
	printf(" %s %s %d %d %d",t.no,t.name,t.c,t.m,t.e);
	fclose(fq);
	

}