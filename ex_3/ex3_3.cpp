//��̩�ռ�����e�Ľ���ֵ��e=1+1/1!+1/2!+��+1/n!��ֱ�����һ��С��10-6Ϊֹ��
#include<stdio.h>
main()
{
	int i=1;
	double e=1,a=1;
	while((1.0/a)>1e-6)
	{
		a=a*i;
		e=e+1.0/a;
		i++;
		 
	}
	printf("e=%f",e);
 } 
