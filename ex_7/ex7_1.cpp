//编写一个函数exchange实现两个变量值的交换。再编写一个主函数调用exchange实现主函数中两变量值的交换。
#include<stdio.h>
void exchange(int*p,int*q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
main()
{
	int x,y;
	printf("输入两个变量：");
	scanf("%d%d",&x,&y);
	exchange(&x,&y);
	printf("x=%d y=%d",x,y);
	printf("\n");
}