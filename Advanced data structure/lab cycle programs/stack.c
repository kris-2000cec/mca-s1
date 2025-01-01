#include<stdio.h>
void push();
void pop();
void peek();
void show();
int stack[100],i, top,n,choice ,x;
void main()
{	
	top=-1;
	printf("enter size of stack :");
	scanf("%d",&n);
	
	printf("choose an operation \n1.push\n2.pop\n3.peek\n4.show\n5.exit\n ");
	do
	{
	printf("Enter choice : \n");
	
	scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			peek();
			break;
			case 4:
			show ();
			break;
			case 5:
			printf("Exiting.......");
			break;
			default:
			printf("Enter valid choice");
		}
	}
	while(choice!=5);
}
void push()
{
	if(top>=n-1)
	{
		printf("stack overflow");
	}
	else
	{
		printf("enter elements to stack : ");
		
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
	
}

void pop()
{
	if(top==-1)
		printf("stack underflow");
	else
	{
		printf("popped element : %d",stack[top]);		
		top--;		
	}
}
void peek()
{
	if(top==-1)
		printf("stack underflow");
	else
	{
		printf("peek element : %d",stack[top]);		
				
	}
}
void show()
{
	if(top==-1)
	{
		printf("stack underflow");
		}
	else
	{
		printf("elements in the stack is : \n");	
		for(i=top; i>=0;i--)
			printf("%d",stack[i]);	
				
	}
}
















