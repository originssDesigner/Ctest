//���ң���һ�����в���ĳ��������x������ҵ���������������±�λ�ã�
//����Ҳ��������"not found"����ѡ��һ�ֲ��ҷ�����
#include<stdio.h>
#define N 10
main()
{
	int a[N]={1,2,3,4,5,6,7,8,9,10};
	int i,x,find;
	printf("����������֣�");
	scanf("%d",&x);
	for(i=0;i<N;i++)
		if(a[i]==x)
		{
			find=1;
			break;
		}
		if(find==1)
			printf("a[%d]",i);
		else
			printf("not found!");
		printf("\n");
}


