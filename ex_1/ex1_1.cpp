//由键盘输入圆的半径，计算输出圆的周长和面积。
#include<stdio.h>
main()
{
	float r,S,C;
	scanf("%f",&r);
	S=3.14*r*r;
	C=2*3.14*r;
	printf("S=%f\n",S);
	printf("C=%f\n",C);
}