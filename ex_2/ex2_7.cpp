//����ͬ�����⣬��֪�������������Ϊn,������Ϊm��
//����n��m��ֵ������н⣬���������Ŀ���õ���Ŀ������޽⣬�����NO��
#include<stdio.h>
main()
{
	int x,y,n,m;
	scanf("%d%d",&n,&m);
	if(m%2==0)
	{
		x=(4*n-m)/2;
		y=n-x;
		if(x>0&&y>0)
			printf("��������Ϊ%d�õ�����Ϊ%d",x,y);
        else
			printf("No");
	}
	else
		printf("NO");

}
