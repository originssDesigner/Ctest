//�����������Ȼ���������667����С�����������Լ�������120��1��
#include<stdio.h>
main()
{
	int m,n;
	int a=1,b;
	for(m=1;m<=333;m++)
	{
		n=667-m;
		for(a=m;a>=1;a--)
		if(m%a==0&&n%a==0)
		    {
		       b=m*n/a;
		        break;
	        }
	    if(b==120*a)
	    printf("����%d,%d\n",m,n);
    }
 } 
