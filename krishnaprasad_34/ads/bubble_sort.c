#include<stdio.h>
void main()
{
int  a[100],n,i,j,temp;
printf("enter no elements in the array");
scanf("%d",&n);
printf("enter  elements in the array");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\narray before sorting : ");
for (i=0;i<n;i++)
{
printf(" %d",a[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}	
printf("\narray after sorting : ");
for (i=0;i<n;i++)
{
printf(" %d",a[i]);
}









}
