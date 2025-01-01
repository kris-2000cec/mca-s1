#include<stdio.h>
void main()
{
 int choice,num1,num2,sum,sub,mul;
 float div;
 printf("1.add\n2.substract\n3.mumtiply\n4.division");
 scanf("%d",&choice);
 printf("Enter 2  numbers for operation");
 scanf("%d %d",&num1,&num2);
 switch(choice)
 {
 case 1:
 sum=num1+num2;
 printf("sum=%d",sum);
 break;
 case 2:
 sub=num1-num2;
 printf("result=%d",sub);
 break;
 case 3:
 mul=num1*num2;
 printf("result=%d",mul);
 break;
 case 4:
 div=num1/num2;
 printf("result=%f",div);
 break;
 default:
 printf("enter valid input");
 break;
}
}
