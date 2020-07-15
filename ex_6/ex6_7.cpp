//给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i,j），在该位置上的元素是第i行上的最大数，第j列上的最小数。
//一个矩阵A也可能没有鞍点。请找出A的鞍点。
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
            {     max=a[i][j];  //找出每一行中的最大值 
                  colum=j;      //记下最大值的列号 
            }
        }
        min=a[i][colum];      
        b=1;
        for(j=0;j<4;j++)
        	if(a[j][colum]<min)
        		b=0;   //如果列中有比min更小的数，就不是鞍点,b设置为0 
        if(b==1)
        printf("%d %d %d\n",i,colum,a[i][colum]);              
	}                          
}  
