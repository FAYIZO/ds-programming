#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};

struct node *header=NULL;

void insert_at_front(int item)
{
//for the first node
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
  if(header==NULL)
{
newnode->data=item;
newnode->link=NULL;
}
else
{ //for the subsequence nodes
newnode->data=item;
newnode->link=header;
}
header=newnode;
}

void traverse()
{
struct node *ptr;
ptr=header;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->link;
}
}
int main()
{
insert_at_front(10);
insert_at_front(20);
traverse();
}
