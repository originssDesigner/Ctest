//�������ͼ�Σ�����������ɼ������룩�����忴������ĿҪ��
#include<stdio.h>
main()
{
	int n,x,y,i,m;
	printf("��������"); 
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
