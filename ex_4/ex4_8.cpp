//输出下列高度为n的图形，具体如要求所示。
#include<stdio.h>
main()
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	int count=0;
	int del=n;
	for(int y=1;y<=n;y++)
	{   
		for(int x=1;x<=del;x++)
		{
			i=x+count;
			if(i%2==0)
			{
				int sum=0;
				for(int j=1;j<=i;j++)
				{
					sum+=j;
				}
				printf("%d\t",sum-count);
			}
			else
			{
				int sum=0;
				for(int j=1;j<=i-1;j++)
				{
					sum+=j;
				}
				printf("%d\t",sum+1+count);
			}
		}
		printf("\n");
		del--;
		count++;
	}

}