//�Ӽ�������һ����λ����m�����m�ķ������������磺123������Ϊ321��
#include<stdio.h>
main()
{
	int m,a,b,c,n;
	scanf("%d",&m);
	a=m%10;
	b=m%100/10;
	c=m/100;
	n=a*100+b*10+c;
	printf("%d\n",n);
}