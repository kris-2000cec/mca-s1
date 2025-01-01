#include<stdio.h>
void main()
{
int age;
printf("enter age");
scanf("%d",&age);
if (age<=12)
printf("Child");
else if(age<=18)
printf("teenager");
else 
printf("Adult");
}
