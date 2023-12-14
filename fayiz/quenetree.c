#include<stdio.h>
#include<stdlib.h>
void enqueue();
int dequeue();
void display_graph();
int front=-1,rear=-1,max;
int q[25];
int graph[5][5]={{0,1,1,0,0},{1,0,0,1,1},{0,1,1,0,1},{0,1,1,0,1},{0,1,0,1,0}};

void enqueue(int key)
{
if(rear<25)
{

if(front==-1 && rear==-1)
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
q[rear]=key;
}
}

int dequeue()
{
int item;
if(front==-1)
{
printf("\n queue is empty\n");
return;
}
else
{

if(front==rear)
{
front=0;
rear=0;
}
item=[front];
front=front+1;
}
return (item);

}

void display_graph()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("\n%d",graph[i][j]);
}
       printf("\n");
}
}
void bfs(int s)
{
enqueue(s);
}
