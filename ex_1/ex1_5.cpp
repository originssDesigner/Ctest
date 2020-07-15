//由键盘输入点A和点B的坐标值，然后计算并输出两点之间的距离。开平方根用函数sqrt实现，此函数包含在math.h头文件中。
#include<stdio.h>
#include<math.h>
main()
{
	float x1,y1,x2,y2,l;
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	l=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("l=%f\n",l);
}