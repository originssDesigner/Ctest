//��дһ���������ú�������ͳ��һ������Ϊ2���ַ�������һ���ַ����г��ֵĴ�����
//���磬�ٶ�������ַ���Ϊ: asd asasdfg asd as zx67 asd mklo,���ַ���Ϊ:as����Ӧ���6�� 
#include <stdio.h> 
int fun(char *str,char *substr)
{	int n=0;
	char *p,*r;
	while(*str)  //�ж��ַ����Ƿ����������ַ�
	{		p=str;
			r=substr;
			while(*r)  //�ж����ַ����Ƿ����������ַ�
				if(*r==*p)   //�ж��ַ������Ƿ��������ַ�����ͬ
				{	r++;
					p++;
				}
				else
					break;  
			if(*r=='\0')  //�����������˵������break�����ģ�Ҳ�����������ַ�����ͬ���ַ���
				n++;
			str++;
	}
	return n;
}
main()
{
	int n;
	char str[]="asd asasdfg asd as zx67 asd mklo";
	char substr[]="as";
	n=fun(str,substr);
	printf("%d\n",n);
}

