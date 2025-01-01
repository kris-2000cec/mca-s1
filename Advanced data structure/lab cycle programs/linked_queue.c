#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*LINK;
};
struct node*top=NULL;
void enqueue()
{
	struct node*temp,*newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->LINK=NULL;
		temp=top;
		if (newnode==NULL)	
		printf("No.space availabe");
		else
		{	printf("Enter element to the quwue : ");
			scanf("%d",&newnode->data);
			if(top==NULL)
			{
				top=newnode;
			}
			else
			{
				while(temp->LINK!=NULL)
				{
					temp=temp->LINK;
				}
			
			temp->LINK=newnode;
			}
		printf("\n%d inserted in to the queue",newnode->data);
			
		}
}
void dequeue()
{

	if (top==NULL)
	{
		printf("\nList is empty");
		return;
	}
	struct node*temp=top;
	top=temp->LINK;
	printf("\n%d deleted",temp->data);
	free(temp);
}
void search()
{
	struct node*temp=top;
	int key,pos=1;
	if(top==NULL)
	{
	printf("\n The Queue is empty 😏️");
	return;
	}
	printf("\nEnter the elememt to be searched 🙈️: ");
	scanf("%d",&key);
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("\n%d is available at position %d",key,pos);
			return;
		}
		temp=temp->LINK;
		pos++;
	}
	printf("\n The %d value doesn't exist",key);
}

void Display()
{
struct node*temp=top;
if(top==NULL)
{
printf("\nQueue is empty");
return;
}
printf("\n Elements in linked Queue are:");
while(temp!=NULL)
{
printf("\t%d",temp->data);
temp=temp->LINK;
}
}


int main()
{
int choice; 
printf("*****Linked Queue*******");
	do
	{
		printf("\n1. Enqueue\n2. Dequeue\n3.search\n4. display\n5. exit");
		printf("\nEnter choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:search();break;
			case 4:Display();break;
			case 5:exit(0);
			default:printf("Enter valied choice !!!!");
		}
	}
	while (choice!=6);
	return 0;	
}
