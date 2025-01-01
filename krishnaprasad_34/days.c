#include<stdio.h>
void main()
{
 int day;
 printf("Enter day number :");
 scanf("%d",&day);
 switch(day)
 {
 case 1:
 printf("sunday");
 break;
 case 2:
 printf("Monday");
 break;
 case 3:
 printf("Tuesday");
 break;
 case 4:
 printf("Wedensday");
 break;
 case 5:
 printf("Thursday");
 break;
 case 6:
 printf("Friday");
 break;
 case 7:
 printf("saturday");
 break;
 default:
 printf("enter valid input");
 break;
}
}
