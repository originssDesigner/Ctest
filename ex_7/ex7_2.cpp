//��дһ������fun���ú����ܴ�һ�������еõ����ֵ�����ֵ��λ�á�
//�ٱ�дһ������������fun�����һ�����������ֵ�����ֵ���±�λ�á�
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
	printf("����ʮ�����֣�");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	max=fun(a);
	printf("max=a[%d]=%d",max,a[max]);
}
