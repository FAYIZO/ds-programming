#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int data;00
 struct Node *link;
};
typedef struct Node list;
struct Node *header=NULL;
void insert_at_end(int key)
if(header==NULL)
{
 newnode=(struct Node *) malloc(sizeof(struct Node));
 newnode->data=10;
 newnode->link=NULL;
 header=newnode;
}
else
{
 struct Node *ptr;
 ptr=header;
 while(ptr->link!=NULL)
{
 ptr=ptr->link;
} 
 newnode=(struct Node *)malloc(struct Node));
 newnode->data=20;
 newnode->link=NULL;
 ptr->link=newnode;
}
