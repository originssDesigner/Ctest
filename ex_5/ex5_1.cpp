//��дһ����n!�ĺ�����Ȼ���д��������e��ֵ��e=1+1/1!+1/2!+��+��
#include<stdio.h>
int f(int n)
{
	int i;
	int p=1;
	for(i=1;i<=n;i++)
		p*=i;
	return p;
}
main()
{
	double e=1;
	int i;
	for(i=1;f(i)<1e6;i++)
		e=e+1.0/f(i);
	printf("e��ֵΪ:");
	printf("%lf\n",e);
}