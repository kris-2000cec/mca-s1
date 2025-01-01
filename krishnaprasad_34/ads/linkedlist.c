#include<stdio.h>
#include<stdlib.h>
struct node{
int data,temp;
struct node*LINK;
};
struct node*header=NULL;
void insertfirst()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if (newnode==NULL)	
		printf("No.space availabe");
	else
	{	
		printf("Enter the element to be inserted :");
		scanf("%d",&newnode->data);
		newnode->LINK=NULL;
		if(header==NULL)
		{
			header=newnode;         
		}
		else
		{
			newnode->LINK=header;
			header=newnode;
		}
		printf("\n%d inserted into the list",newnode->data);
		  
	}
	
}

void insertlast()
{
		struct node*temp,*newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->LINK=NULL;
		temp=header;
		if (newnode==NULL)	
		printf("No.space availabe");
		else
		{	printf("Enter element to the stack : ");
			scanf("%d",&newnode->data);
			if(header==NULL)
			{
				header=newnode;
			}
			else
			{
				while(temp->LINK!=NULL)
				{
					temp=temp->LINK;
				}
			
			temp->LINK=newnode;
			}
		printf("\n%d inserted in to the list",newnode->data);
			
		}
}



void display()
{
	struct node*temp=header;
	if(temp==NULL)
	{
		printf("\nList is empty");
		return;
	}
	printf("\n Elements in linked list are:");
	while(temp!=NULL)
	{
		printf("\t%d",temp->data);           
		temp=temp->LINK;
	}
}

//loc insert

void insertlocation()
{
		int key;
		struct node*temp,*newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->LINK=NULL;
		printf("\nEnter the value of the node after which the new node should be inserted : ");
		scanf("%d",&key);
		temp=header;
		while(temp!=NULL && temp->data!=key)
		{
			temp=temp->LINK;
		}
		if(header==NULL)
			{
				printf("\n the %d value does not exit",key);
				return;
			}
		if(newnode==NULL)
		{
			printf("no spavce available");
		}
		else
		{
			printf("Enter the lement to be inserted : ");
			scanf("%d",&newnode->data);
			newnode->LINK=temp->LINK;
			temp->LINK=newnode;
			printf("\n%d inserter after %d",newnode->data,key);
		}
		
}

//del first
void deletefirst()
{
	if (header==NULL)
	{
		printf("\nList is empty");
		return;
	}
	struct node*temp=header;
	header=temp->LINK;
	printf("\n%d deleted",temp->data);
	free(temp);
}
//del last
void deletelast()
{
	if (header==NULL)
	{
		printf("\nlist is empty");
		return;
	}
	struct node*temp=header,*prev=NULL;
	if(temp->LINK==NULL)
	{
		printf("\n%d deleted",temp->data);
		free(temp);
		header=NULL;
		return;
	}
	while(temp->LINK!=NULL)
	{
		prev=temp;
		temp=temp->LINK;
	}
	printf("\n%d deleted",temp->data);
	free(temp);
	prev->LINK=NULL;
}

//del loc
void deletelocation()
{
	int key;
	struct node*temp=header,*prev=NULL;
	printf("\nEnter the value of the node to be deleted:");
	scanf("%d",&key);
	if(temp==NULL)
	{
		printf("\nList is empty");
		return;
	}
	if(temp->data==key)
	{
		header=temp->LINK;
		printf("\n%d deleted",temp->data);
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=key)
	{
		prev=temp;
		temp=temp->LINK;
	}
	if(temp==NULL)
	{
		printf("\nthe %d value doesn't exist",key);
		return;
	}
	prev->LINK=temp->LINK;
	printf("\n%d deleted",temp->data);
	free(temp);
}

//search
void search()
{
	struct node*temp=header;
	int key,pos=1;
	if(temp==NULL)
	{
		printf("\n List is empty");
		return;
	}
	printf("\nEnter the elememt to be searched : ");
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


int main()
{
int choice;
printf("\n SINGLY LINKED LIST\n");
do
{
	printf("\n 1.Insert at begining \n2.Insert at last \n3.Insert at random location \n4.Delete at begining \n5.Delete from last 	\n6.Delete from random location \n7.Search for an element \n8.Display \n9.EXIT");
	printf("\nEnter a choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:insertfirst();
		break;
		case 2:insertlast();
		break;
		case 3:insertlocation();
		break;
		case 4:deletefirst();
		break;
		case 5:deletelast();
		break;
		case 6:deletelocation();
		break;
		case 7:search();
		break;
		case 8:display();
		break;
		case 9:exit(0);
		default:printf("\nInvalid choice!!!!!!!");
	}
}
while(choice!=9);
return 0;
}
