//��дһ����������һ���ַ���������Ѱ��ָ����һ���ַ��������ҵ�����1�����Ҳ�������0��
#include<stdio.h>
void f(char *p,char*t)
{
	int i;
	for(i=0;*(p+i);i++)
		if(*t==*(p+i))
		{
			printf("s[%d]",i);
			break;
		}
}

main()
{
	char s[]="abcdef";
	char t;
	printf("�����ַ���");
	scanf("%s",&t);
	f(s,&t);

}

