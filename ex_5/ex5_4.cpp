//��дһ����������һ��ʮ������ת��Ϊ��������ʽ�����
#include<stdio.h>
void f(int x)
{
	if(x/2!=0)
		f(x/2);
	printf("%d",x%2);
}
main()
{
	int x;
	printf("����һλʮ��������:");
	scanf("%d",&x);
	printf("��������Ϊ:");
	f(x);
	printf("\n");
}