//���Fibonacci���У�1,1,2,3,5,8,......��ǰ20������
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
	a[0]=a[1]=1;
	int i;
	for(i=2;i<N;i++)
		a[i]=a[i-1]+a[i-2];
	f(a);
	printf("\n");
}
