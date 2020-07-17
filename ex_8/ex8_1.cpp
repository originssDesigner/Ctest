//定义一个"点"结构体，输入二个点的值，然后计算二点间的距离。
#include<stdio.h>
#include<math.h>
struct point
{
	float x,y;
};
main()
{
	float s;
	struct point p1,p2;
	printf("输入两个点的坐标:");
	scanf("%f%f",&p1.x,&p1.y);
	scanf("%f%f",&p2.x,&p2.y);
	s=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	printf("两点之间的距离为%lf",s);
	printf("\n");
}

