//���һ���༶��40λͬѧ������4�ſ��Կγ̣�
//�Ӽ��������λѧ���Ŀ��Գɼ���
//1������ÿλѧ����ƽ���֡�2������ÿ�ſγ̵�ƽ���֡�
#include<stdio.h>
main()
{
	int a[40][4];
	int i,j;
	float avg[40]={0};
	for(j=0;j<40;j++)
	{
		for(i=0;i<4;i++)
		{
			scanf("%d",&a[j][i]);
		    avg[j]+=a[j][i];
		}
		avg[j]/=4.0;
		printf("%lf",avg[j]);
		printf("\n");
	}
}
