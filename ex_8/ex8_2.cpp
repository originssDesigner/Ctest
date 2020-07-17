//某班有40个学生，每个学生的信息包含有学号、姓名、性别、语文成绩、数学成绩、英语成绩、总分。
//从键盘输入40个学生的信息，计算总分，然后按总分从高到低顺序输出。
#include<stdio.h>
#define N 3
struct stu
{
	char nu[10];
	char name[7];
	char sex[3];
	float c;
	float m;
	float e;
	float score;
};
main()
{
	struct stu t;
	struct stu a[N];
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("输入学号，姓名，性别，语文成绩，数学成绩，英语成绩:");
		scanf("%s%s%s%f%f%f",a[i].nu,a[i].name,a[i].sex,
		&a[i].c,&a[i].m,&a[i].e);
		a[i].score=a[i].c+a[i].m+a[i].e;
		printf("%f",a[i].score);
	}
	printf("\n");
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1;j++)
			if(a[j].score<a[j+1].score)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	}
	for(i=0;i<N;i++)
	{
		printf("%s %s %s %f %f %f %f  ",a[i].nu,a[i].name,a[i].sex,
		a[i].c,a[i].m,a[i].e,a[i].score);
		printf("\n");
	}
}

