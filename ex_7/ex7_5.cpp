//编写一个函数fun，该函数的功能是：将形参p所指变量中各位上为偶数的数去除，
//剩余的数按原来从高位到低位的顺序组成一个新的数，并通过形参指针p传回所指变量。 
#include <stdio.h> 
void fun(unsigned int *n) 
{	unsigned int x=0, i; int t; 
	i=1; 
	while(*n) 
	{ 	t=*n % 10;    //求出每一位数
		if(t%2!= 0)   //如果是奇数就去重新组成一个新数
		{ x=x+t*i; i=i*10; } 
		*n =*n /10; 
	} 
	*n=x; //组成的新数存放到n所指的内存空间中
} 
main() 
{	unsigned int n=-1; 
	while(n>99999999||n<0) 
	{ printf("Please input(0<n<100000000): "); scanf("%ld",&n); } 
	fun(&n); 
	printf("\nThe result is: %ld\n",n); 
}
