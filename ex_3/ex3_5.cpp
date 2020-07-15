//用级数求π的近似值。直到最后一项小于10-6为止。求π的方法自己查资料。
#include<stdio.h>
main()
{
	int i=1,sign=1;
	float s=0;
	while(1.0/i>1e-6)
	{
		s=s+sign*(1.0/i);
		i+=2;
		sign=-sign;
	}
	printf("%f",4*s);
}
