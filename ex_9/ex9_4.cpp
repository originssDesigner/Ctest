//定义一个学生结构体，其中包括学生的学号、姓名和3门课程的成绩。
//学生数据在定义结构体变量时直接初始化，然后将学生数据以二进制方式写到磁盘文件中。
//定义一个函数fun，其功能是修改形参filename所指文件中最后一个学生的数据，即用新的学生数据覆盖该学生原来的数据，其它学生的数据不变。
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