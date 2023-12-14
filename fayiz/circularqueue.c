#include<stdio.h>
int queue[4];
int front=-1;
int rear=-1;
int data;
int choice;
void enqueue(int data)
{
if((rear+1)%5==front)
{
printf("The queue is full.!\n");
}
else
{
if((rear==-1)&&(front==-1))
{
front=(front+1)%5;
rear=(rear+1)%5;
}
else
{
rear=(rear+1)%5;
}
queue[rear]=data;
}
}
void dequeue()
{
if(front==-1)
{
printf("The queue is empty:\n");
}
else
{
data=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%5;
}
printf("The deleted item from the queue is:%d\n",data);
}
}
void print()
{
if((front==-1)&&(rear==-1))
{
printf("Queue doesnot contain any data.\n");
}
else
{
printf("Elements in the queue are:");
for(int i=front;i!=rear;(i+1)%5)
{
printf("\n %d \n",queue[i]);
}
printf("\n %d \n",queue[rear]);
}
}
int main()
{
do
{
printf("\n 1.Enqueue\n 2.Dequeue\n 3.Print elements of queue\n 4.Exit");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("Enter the value:");
scanf("%d",&data);
enqueue(data);
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
print();
break;
}
case 4:
{
print("Exit");
break;
}
}
}
while(choice!=4);
return 0;
}
