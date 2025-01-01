#include<stdio.h>
void main()
{
int  a[100],b[100],c[100],n1,n2,n3,i, j ,k;
printf("enter no elements in the first array : ");
scanf("%d",&n1);
printf("enter  elements in the first array");
for (i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf(" first array : ");
for (i=0;i<n1;i++)
{
printf(" %d",a[i]);
}



printf("\nenter no elements in the second array : ");
scanf("%d",&n2);
printf("enter  elements in the second array");
for (j=0;j<n2;j++)
{
scanf("%d",&b[j]);
}
printf("\n second array : ");
for (j=0;j<n2;j++)
{
printf(" %d",b[j]);
}




//op starts here



n3=n1+n2;
i=j=k=0;
while(i<n1 && j<n2)
{
	if(a[i]<b[j])
	{
		c[k++]=a[i++];
	}
	else
		c[k++]=b[j++];
}
while(i<n1)
{
	c[k++]=a[i++];
	
}
while(j<n2)
{
	c[k++]=b[j++];
	
}
printf(" \n%d ",c[2]);

printf(" \nmerged array : ");
for (i=0;i<n3;i++)
{
printf(" %d",c[i]);
}

}
