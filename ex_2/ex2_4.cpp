//��������һ���ַ����жϸ��ַ�����ĸ�����֡����������ַ���
#include<stdio.h>
main()
{
	char x;
	scanf("%c",&x);
	if(x>=65&&x<=90||x>=97&&x<=122)
		printf("��ĸ");
	   if(x>=48&&x<=54)
		   printf("����");
	else
		printf("�����ַ�");
}