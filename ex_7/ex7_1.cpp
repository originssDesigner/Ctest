//��дһ������exchangeʵ����������ֵ�Ľ������ٱ�дһ������������exchangeʵ����������������ֵ�Ľ�����
#include<stdio.h>
void exchange(int*p,int*q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
main()
{
	int x,y;
	printf("��������������");
	scanf("%d%d",&x,&y);
	exchange(&x,&y);
	printf("x=%d y=%d",x,y);
	printf("\n");
}