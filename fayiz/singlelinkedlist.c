#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *header = NULL;

void insert_at_front(int item)
{
	// for the first node 
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node)); 
	if(header == NULL)
	{
		newnode -> data = item;
		newnode -> link = NULL;
	}
	else
	{	// for the subsequent nodes
		newnode -> data = item;
		newnode->link = header;
	}
	header = newnode;
	
	
}

void traversal()
{
	struct node *ptr;
	ptr = header;
	while(ptr != 	NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->link;
	}
}

void insert_at_end(int item)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node)); 
	struct node *ptr;
	ptr = header;
	while(ptr ->link != NULL)
	{
		ptr=ptr->link;
	}
	ptr -> link = newnode;
	newnode->link = NULL;
	newnode->data = item;	
}
void insert_at_anypos(int item,int key)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node)); 
	newnode->data=item;
	struct node*temp;
	temp=header;
	while(temp->data!=key && temp->link!=NULL)
	{
		temp = temp->link;
	}
	if(temp->link==NULL)
	{
		printf("key not found");
	}
	else
	{
		newnode->link=temp->link;
		temp->link=newnode;
	}
}
void

			
int main()
{
	insert_at_front(10);
	insert_at_front(20);
	insert_at_end(30);
	insert_at_end(40);
	insert_at_anypos(50,30);
	traversal();			
}
