//查找：在一组数中查找某给定的数x，如果找到则输出该数所在下标位置，
//如果找不到则输出"not found"。请选择一种查找方法。
#include<stdio.h>
#define N 10
main()
{
	int a[N]={1,2,3,4,5,6,7,8,9,10};
	int i,x,find;
	printf("输入查找数字：");
	scanf("%d",&x);
	for(i=0;i<N;i++)
		if(a[i]==x)
		{
			find=1;
			break;
		}
		if(find==1)
			printf("a[%d]",i);
		else
			printf("not found!");
		printf("\n");
}


