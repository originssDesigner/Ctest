//求出一组整数中的最大值。
#include<stdio.h>
#define N 10
main()
{
	int a[N];
	int i,max;
	printf("给出10个数：");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<N;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("max=%d",max);
	printf("\n");
}