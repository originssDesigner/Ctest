//��дһ��������շת��������������Լ����Ҫ���õݹ�ʵ�֡�Ȼ���дһ������������������������Լ����
#include<stdio.h>
int gcd(int m,int n)
{	int t;
	if(m<n)
			t=m,m=n,n=t;
	if(m%n)
			return gcd(n,m%n);
	else
			return n;
}
main()
{	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",gcd(x,y));
}
