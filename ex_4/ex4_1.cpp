//输出100以内的所有素数，要求一行输出5个素数。
#include<stdio.h>
main()
{
	int x,count=0;
	int i=2;
	for(x=1;x<=100;x++)
	{
		int i=2;
		while(i<x)
		{
			if(x%i==0)
			break;
			i++;
		}
		if(i==x)
		{
			count++;
		    printf("%5d",x);
			if(count%5==0)
			{
				printf("\n");
			}
	    }
	}
 } 
