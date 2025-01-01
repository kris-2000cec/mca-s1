#include<stdio.h>
void main()
{
int  a[100],n,i,key,f=0;
printf("enter no elements in the array : ");
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
printf("\nenter key to search");
scanf("%d",&key);
for (i=0;i<n;i++)
{
	if(a[i]==key)
       	{f=1;
		break;
}
}
if(f==1)
printf("\nsearch is successful");
else
printf("\nelement not found");
}

