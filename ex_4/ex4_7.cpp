//我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
//现在，给定两个整数n和m，0<n<=m<=200，要求计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。（注意：本题不要用数组实现）
//例如：n=2,m=5时其结果是3+5+7+11=26

#include<stdio.h>
main()
{
	int n,m,s=0;
	int x,i,t=0;
	scanf("%d%d",&n,&m); 
	for(x=2;;x++)
	{
		for(i=2;i<=x;i++)
			if(x%i==0)
				break;
		if(i==x)
		{
			t++;
			if(t>=n&&t<m)
			{
			   s=s+x;
			   printf("%d+",x);
			}
		} 
		if(t==m)
		{
			
			s=s+x;
			printf("%d=",x);
			break;
		}
    }   
    printf("%d",s); 
}
