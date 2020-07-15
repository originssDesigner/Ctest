//输出以下图形（输出的行数由键盘输入），具体看附带题目要求
#include<stdio.h>
main()
{
	int n,x,y,i,m;
	printf("输入行数"); 
	scanf("%d",&n);
	x=n;
	y=n;
	for(m=1;m<=n;m++)
	 {
	 for(i=1;i<=2*n-1;i++)
	 { 
	    if(i>=x&&i<=y)
	    printf("*");
	    else
	    printf(" ");
	 	if(i==2*n-1)
	 	printf("\n");
	 }
	 	x--;
	 	y++; 
	 }
	
}
