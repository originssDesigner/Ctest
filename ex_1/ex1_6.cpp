//����5�����ͱ���x1,x2,x2,x4,x5���Ӽ����������ݡ�
//����5��������ƽ��ֵ��
//ʵ�����ݵ��ƶ���x1��x2��x3��x4��x5��x1������x1��ֵ��x2,x2��ֵ��x3...x5��ֵ��x1)��

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
	printf("ƽ��ֵ=%f",h);
}