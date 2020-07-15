//输出乘法口诀表。
#include<stdio.h>
main()
{
	int i=1;
	int j=0;
	for(i=1;i<10;i++)
	{
		j=0;
		while(j<i)
		{
			j++;
			printf("%d*%d=%d\t",j,i,i*j); 
		}
		printf("\n");
	}
 } 
