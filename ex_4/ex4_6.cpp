//我国古代数学家张丘建在《算经》一书中曾提出过著名的"百钱买百鸡"问题，
//该问题叙述如下：鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；
//百钱买百鸡，则翁、母、雏各几何？
//意思是公鸡一个五钱，母鸡一个三钱，小鸡三个一钱，现在要用一百钱买一百只鸡，问公鸡、母鸡、小鸡各多少只？
#include<stdio.h>
main()
{
	int a,b,c;
	for(a=0;a<=20;a++)
	for(b=0;b<=33;b++)
	for(c=0;c<=100;c++)
	if(a+b+c==100&&5*a+3*b+c/3==100)
	printf("公鸡=%d母鸡=%d小鸡=%d\n",a,b,c);
 } 
