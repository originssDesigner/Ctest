//�������������Ϊ100�ļ���ͬ������ļ��ĸ�������ĸ�����
#include<stdio.h>
main()
{
	int m=100;
	int x=0,y=0;
	while(x<=50)
	{
		if(x*2+y*4==100)
		{
			printf("��=%d",x);
		    printf("����=%d\n",y);
		}
		    x++;
            y=(100-x*2)/4;
	}
}
