//�ü�����еĽ���ֵ��ֱ�����һ��С��10-6Ϊֹ����еķ����Լ������ϡ�
#include<stdio.h>
main()
{
	int i=1,sign=1;
	float s=0;
	while(1.0/i>1e-6)
	{
		s=s+sign*(1.0/i);
		i+=2;
		sign=-sign;
	}
	printf("%f",4*s);
}
