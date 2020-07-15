//鸡免同笼问题，已知鸡和免的总数量为n,总腿数为m。
//输入n和m的值，如果有解，输出鸡的数目和兔的数目。如果无解，则输出NO。
#include<stdio.h>
main()
{
	int x,y,n,m;
	scanf("%d%d",&n,&m);
	if(m%2==0)
	{
		x=(4*n-m)/2;
		y=n-x;
		if(x>0&&y>0)
			printf("鸡的数量为%d兔的数量为%d",x,y);
        else
			printf("No");
	}
	else
		printf("NO");

}
