#include<stdio.h>
main()
{
	long int x=1;
	int a,b,c,i=1,y;
	while(i<=11)
	{
		x=x*11;
		x=x%1000;
		i++;
    }
    a=x/100;
    b=x%100/10;
    c=x%10;
    y=a+b+c;
	printf("数字之和为%d",y); 
	
	
 } 
