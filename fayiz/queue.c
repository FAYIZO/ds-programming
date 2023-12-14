#include<stdio.h>
#include<stdlib.h>
#define max 3
int qarray[max];
void insert();
void delete();
void display();
int front=-1;
int rear=-1;

int main() 
{
int choice;
while(1)
{
printf("1.ENQUEUE:\n");
printf("2.DEQUEUE:\n");
printf("3.display the queue:\n");
printf("4.exit\n");
printf("enter the choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("invalid choice");
}
}
}

void insert()
{
int item;
if(rear==max-1)
{
printf("queue overflow");
}
else
{
if(front==-1)
front=0;
printf("\n Enter the elements to be inserted:");
scanf("%d",&item);
rear=(rear+1)%3;
qarray[rear]=item;
}
}

void delete()
{
if(front==-1||front>rear)
{
printf("\nqueue underflow");
return;
}
else
{
printf("\n element deleted is:%d\n",qarray[front]);
front=(front+1)%x;
}
}

void display()
{
int i;
if(front==-1)
printf("\nqueue is empty");
else
{
printf("queue is:\n");
for(i=front;i!=rear;i=(i+1)%3)
printf("%d\n",qarray[i]);
}printf("%d\n",qarray[rear]);
}
