//����һ��n*n����A������A�İ�����һ��λ�ã�i,j�����ڸ�λ���ϵ�Ԫ���ǵ�i���ϵ����������j���ϵ���С����
//һ������AҲ����û�а��㡣���ҳ�A�İ��㡣
#include<stdio.h>
#define N 4
main()
{    int a[N][N]={{1,7,4,1},{4,8,3,6},{1,6,1,2},{0,7,8,9}};
    int i,j,row,colum,max,min;
    int b;
    for(i=0;i<4;i++)
    {   max=a[i][0];
        colum=0;
        for(j=0;j<4;j++)
        {   if(a[i][j]>max)
            {     max=a[i][j];  //�ҳ�ÿһ���е����ֵ 
                  colum=j;      //�������ֵ���к� 
            }
        }
        min=a[i][colum];      
        b=1;
        for(j=0;j<4;j++)
        	if(a[j][colum]<min)
        		b=0;   //��������б�min��С�������Ͳ��ǰ���,b����Ϊ0 
        if(b==1)
        printf("%d %d %d\n",i,colum,a[i][colum]);              
	}                          
}  
