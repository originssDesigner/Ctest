//�Ӽ�������һ��Сд��ĸ�������Сд��ĸ��ASCII��ֵ�͸�Сд��ĸ��Ӧ�Ĵ�д��ĸ��
#include<stdio.h>
main()
{
	char c1,c2;
	scanf("%c",&c1);
	c2=c1-('a'-'A');
	printf("%d\n",c1);
	printf("%c\n",c2);
}