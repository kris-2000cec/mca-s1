#include<stdio.h>
 int sum();
void main()
{
int p;
 p=sum();
 printf("%d",p);
 }
 int sum()
 {
 int a,b,s;
 printf("enter 2 num");
 scanf("%d %d",&a,&b);
 s=a+b;
 return s;
 }
 
