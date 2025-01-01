#include<stdio.h>
void main()
{
int ar[50],n,i,s=0;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the elememts");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
s=s+ar[i];
}
printf("Sum=%d",s);
}

