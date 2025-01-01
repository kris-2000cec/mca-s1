#include<stdio.h>
 void sum(int,int);
void main()
{
int a,b;
 printf("enter 2 num");
 scanf("%d %d",&a,&b);
 sum(a,b);
 }
 void sum(int x,int y)
 {
 int s;
 s=x+y;
 printf("sum=%d",s);
 }
 
