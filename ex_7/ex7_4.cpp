#include<stdio.h>
void strcat(char *str1, char *str2)  
{  
    while(*str1!='\0')
		str1++;  
    while(*str2!='\0')
		*str1++ = *str2++;  
    *str1 = '\0';  
}  
void main()  
{  
    char a[100]= "I am ";  
    char b[]= "a student";  
    strcat(a,b);  
    printf("%s\n",a);  
}  
