//��ѡ��һ�����򷽷�����һ��������С���������뾡���Ż�����
#include<stdio.h>
#define N 10
void f(int a[])
{
	int i;
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
}
main()
{
	int a[N];
	int i,j,t;
	printf("����10�����֣�");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(j=0;j<N-1;j++)
	{
		for(i=0;i<N;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			f(a);
			printf("\n");
	}
}
