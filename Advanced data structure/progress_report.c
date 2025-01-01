#include<stdio.h>
void main()
{
int m;
printf("enter the mark obtained");
scanf("%d",&m);
if (m>=80)
printf("A+");
else if(m>=70)
printf("A");
else if(m>=60)
printf("B+");
else if(m>=50)
printf("B");
else 
printf("fail");
}
