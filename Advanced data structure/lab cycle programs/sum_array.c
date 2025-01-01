#include<stdio.h>
void main()
{
int  a[100],n,i,sum=0;
printf("enter no elements in the array");
scanf("%d",&n);
printf("enter  elements in rhe array");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array : ");
for (i=0;i<n;i++)
{
printf(" %d",a[i]);
}




for (i=0;i<n;i++)
{
	sum+=a[i];
}

printf("\nsum of array : %d",sum);
}


