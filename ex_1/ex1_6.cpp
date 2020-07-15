//定义5个整型变量x1,x2,x2,x4,x5，从键盘输入数据。
//求这5个整数的平均值。
//实现数据的移动，x1→x2→x3→x4→x5→x1。（即x1的值给x2,x2的值给x3...x5的值给x1)。

#include<stdio.h>
main()
{
	float x1,x2,x3,x4,x5,t,h;
	scanf("%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5);
	t=x5;
	x5=x4;
	x4=x3;
	x3=x2;
	x2=x1;
	x1=t;
	h=(x1+x2+x3+x4+x5)/5;
	printf("x1=%f\nx2=%f\nxs=%f\nx4=%f\nx5=%f\n",x1,x2,x3,x4,x5);
	printf("平均值=%f",h);
}