//����һ��"��"�ṹ�壬����������ֵ��Ȼ���������ľ��롣
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
	printf("���������������:");
	scanf("%f%f",&p1.x,&p1.y);
	scanf("%f%f",&p2.x,&p2.y);
	s=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	printf("����֮��ľ���Ϊ%lf",s);
	printf("\n");
}

