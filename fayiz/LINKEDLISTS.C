#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *link;
};
typedef struct Node list;
struct Node *header=NULL;

void insert_at_end(int key)
{
	struct Node *newnode;
if(header == NULL)
{
	
	newnode = (struct Node *)malloc (sizeof(struct Node));
	newnode->data = key;
	newnode->link = NULL;
	header = newnode;
	
}
else
{	
	struct Node *ptr;
	ptr = header;
	while(ptr->link != NULL)
		{
		ptr = ptr->link;
		}

	newnode = (struct Node *)malloc(sizeof(struct Node));
	newnode->data = key;
	newnode->link = NULL;
	ptr->link = newnode;

}
}


void display(){
list *i=header;
for(i=header;i!=NULL;i=i->link)
{
	printf("%d\n",i->data);
}

}

int main(){
int ch,key;
while(1){
printf("enter your choice:\n1.end\n2.display\n3.exit\n");
scanf("\n%d",&ch);


switch(ch){

case 1:printf("enter the data to insert\n");
scanf("%d",&key);
insert_at_end(key);
break;

case 2:display();
break;

case 3:exit(0);

}
}
}


