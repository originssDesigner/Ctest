//��дһ��������շת��������������Լ����Ȼ���дһ������������
//�������������Լ����
#include<stdio.h>
int f(int x,int y)
{
	int m;
	while(y!=0)
	{
		m=x%y;
		x=y;
		y=m;
	}
	return x;
}
main()
{
	int x,y;
	printf("������������:");
	scanf("%d%d",&x,&y);
	printf("�������������Լ��Ϊ:");
	printf("%d",f(x,y));
}
