//linkedstack
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *top=NULL;
void push()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if (newnode==NULL)
		printf("no space available");
	else
	{
		printf("Enter element to stack : ");
		scanf("%d",&newnode->data);
		newnode->link=top;
		top=newnode;
		printf("element %d is inserted\n",newnode->data);
		
			
	}


}
void display()
{	
	struct node*temp=top;
	if (top==NULL)
	{
		printf("empty stack!!!");
		return;
	}	
	else
	{

        	printf("Stack elements: ");
		while(temp!=NULL)
		{
			printf("\t%d",temp->data);
			temp=temp->link;
		}
	}
	
	
}

void pop()
{
	if (top==NULL)
	{
		printf("empty stack!!!");
		return;
	}
	else
	{	
		struct node *temp=top;
		top=temp->link;
		printf("popped element %d",temp->data);
		free(temp);
	}
	
}


void search()
	{
		int key,pos=1;
		printf("enter the element to search : ");
		scanf("%d",&key);
		struct node *temp = top;
		if (top==NULL)
			{
				printf("stack is under flow");
				return;
			}
		while (temp!=NULL)
		{
			if(temp->data==key)
			{	
				printf("element %d is found at pos %d",key,pos);
				return;
			}
			

			pos++;
			temp=temp->link;
			
		}
		printf("key not found");
		
	}
void peek()
{
	if (top==NULL)
	{
		printf("empty stack!!!");
		return;
	}
	else
	{
		printf("%d is at top",top->data);
	}	
}
int main()
{
	int choice;
	printf("*****Linked stack*******");
	do
	{
		printf("\n1. push\n2. pop\n3.search\n4. display\n5. peek\n6. exit");
		printf("\nEnter choice ☠️ : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:search();break;
			case 4:display();break;
			case 5:peek();break;
			case 6:exit(0);
			default:printf("Enter valied choice !!!!😤️");
		}
	}
	while (choice!=7);
	return 0;	
}



