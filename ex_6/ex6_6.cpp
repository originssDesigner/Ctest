//如果一个班级有40位同学，共有4门考试课程，
//从键盘输入各位学生的考试成绩，
//1）计算每位学生的平均分。2）计算每门课程的平均分。
#include<stdio.h>
main()
{
	int a[40][4];
	int i,j;
	float avg[40]={0};
	for(j=0;j<40;j++)
	{
		for(i=0;i<4;i++)
		{
			scanf("%d",&a[j][i]);
		    avg[j]+=a[j][i];
		}
		avg[j]/=4.0;
		printf("%lf",avg[j]);
		printf("\n");
	}
}
