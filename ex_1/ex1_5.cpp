//�ɼ��������A�͵�B������ֵ��Ȼ����㲢�������֮��ľ��롣��ƽ�����ú���sqrtʵ�֣��˺���������math.hͷ�ļ��С�
#include<stdio.h>
#include<math.h>
main()
{
	float x1,y1,x2,y2,l;
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	l=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("l=%f\n",l);
}