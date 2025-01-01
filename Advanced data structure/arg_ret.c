#include<stdio.h>
 int sum(int,int);
void main()
{
int p,a,b;
 printf("enter 2 num");
 scanf("%d %d",&a,&b);
 p=sum(a,b);
 printf("%d",p);
 }
 int sum(int x,int y)
 {
 int s;
 s=x+y;
 return (s);
 }
 
