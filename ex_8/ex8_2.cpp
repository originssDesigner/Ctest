//ĳ����40��ѧ����ÿ��ѧ������Ϣ������ѧ�š��������Ա����ĳɼ�����ѧ�ɼ���Ӣ��ɼ����ܷ֡�
//�Ӽ�������40��ѧ������Ϣ�������ܷ֣�Ȼ���ִܷӸߵ���˳�������
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
		printf("����ѧ�ţ��������Ա����ĳɼ�����ѧ�ɼ���Ӣ��ɼ�:");
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

