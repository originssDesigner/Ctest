//ģ��������Ĺ��ܣ���дһ�������ܹ������û�������������+ - * /)�����������������㡣
#include<stdio.h>
main()
{
	float a,b;
	char x;
	scanf("%f%c%f",&a,&x,&b);
	if(x=='+')
		printf("%f+%f=%f",a,b,a+b);
     else 
	     if(x=='-')
		    printf("%f-%f=%f",a,b,a-b);
	    else
		     if(x=='*')
		      printf("%f*%f=%f",a,b,a*b);
	          else
			      if(x=='/')
	                 {
					    if(b==0)
			               printf("������");
	                	else
		                   printf("%f/%f=%f",a,b,a/b);
						   }
	
}
