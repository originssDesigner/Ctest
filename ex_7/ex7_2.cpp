//编写一个函数fun，该函数能从一组整数中得到最大值及最大值的位置。
//再编写一个主函数调用fun，输出一组整数的最大值及最大值的下标位置。
#include<stdio.h>
#define N 10
int fun(int *p)
{
	int i;
	int max=0;
	for(i=0;i<N;i++)
	{
		if(*(p+max)<*(p+i))
			max=i;
	}
	return max;
}
main()
{
	int max;
	int a[N];
	int i;
	printf("输入十个数字：");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	max=fun(a);
	printf("max=a[%d]=%d",max,a[max]);
}
