//��дһ������fun���ú����Ĺ����ǣ����β�p��ָ�����и�λ��Ϊż������ȥ����
//ʣ�������ԭ���Ӹ�λ����λ��˳�����һ���µ�������ͨ���β�ָ��p������ָ������ 
#include <stdio.h> 
void fun(unsigned int *n) 
{	unsigned int x=0, i; int t; 
	i=1; 
	while(*n) 
	{ 	t=*n % 10;    //���ÿһλ��
		if(t%2!= 0)   //�����������ȥ�������һ������
		{ x=x+t*i; i=i*10; } 
		*n =*n /10; 
	} 
	*n=x; //��ɵ�������ŵ�n��ָ���ڴ�ռ���
} 
main() 
{	unsigned int n=-1; 
	while(n>99999999||n<0) 
	{ printf("Please input(0<n<100000000): "); scanf("%ld",&n); } 
	fun(&n); 
	printf("\nThe result is: %ld\n",n); 
}
