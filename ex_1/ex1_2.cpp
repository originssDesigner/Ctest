//������������������ɼ�����������������ֵ�����ʵ�ֽ���������������ֵ��Ȼ�������
#include<stdio.h>
main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}