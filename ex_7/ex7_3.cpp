//��дһ��������ʵ��һ���ַ����ķ�ת���ٱ�дһ��������ʵ����������һ���ַ����ķ�ת��
#include<stdio.h>
void f(char*p)
{
	int t;
	int i,len=0;
	for(i=0;*(p+i);i++)
		len++;
	for(i=0;i<len/2;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+len-i-1);
		*(p+len-i-1)=t;
	}
}
main()
{
	char s[]="abcdef";
	f(s);
	puts(s);
}