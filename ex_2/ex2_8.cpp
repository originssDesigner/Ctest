//模拟计算器的功能，编写一个程序，能够根据用户输入的运算符（+ - * /)，对两个数进行运算。
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
			               printf("无意义");
	                	else
		                   printf("%f/%f=%f",a,b,a/b);
						   }
	
}
