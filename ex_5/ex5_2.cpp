//��дһ���ж�һ�����Ƿ�Ϊ�����ĺ�����Ȼ���д���������100����������
#include<stdio.h>
int f(int x)
{
	int i;
	for(i=2;i<=x;i++)
	{
		if(i==x)
			return 1;
		if(x%i==0)
			return 0;
	}
}
main()
{
	int test=0;
	scanf("%d",&test);
	if(f(test)==1)
	{
		printf("yes\n");
	}
	else
		printf("no\n");
	int x;
	printf("100���ڵ�����Ϊ:");
	for(x=2;x<100;x++)
	{
		if(f(x)==1)
			printf("%d  ",x);
	}
	printf("\n");
}