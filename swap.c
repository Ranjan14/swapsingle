#include<stdio.h>
int main()
{
 int a=4,b=9;
 b=(a+b)-(a=b);
 printf("a=%d,b=%d",a,b);
 return 0;
 }
