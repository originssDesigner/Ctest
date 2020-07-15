//输出所有总腿数为100的鸡免同笼问题的鸡的个数和免的个数。
#include<stdio.h>
main()
{
	int m=100;
	int x=0,y=0;
	while(x<=50)
	{
		if(x*2+y*4==100)
		{
			printf("鸡=%d",x);
		    printf("兔子=%d\n",y);
		}
		    x++;
            y=(100-x*2)/4;
	}
}
