#include<stdio.h>
int top=-1,s[25];

int graph[5][5]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,1},{0,1,0,1,0}};
int visit[5]={0,0,0,0,0};

void push(int item)
{ 
    
    if(top>=24){
        printf("Stack is full\n");
    }
    else{
        
        
        top++;
        s[top]=item;

    }
}
int pop()
{ 
    int item=0;
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
       item=s[top];
        top--;
        

    }
    return item;
}
void bfs(int s)
{
	int V,i;
	push(s);
	while((top!=-1))
	{
		V=pop();
		
		if(visit[V]!=1)
		{
			visit[V]=1;
			printf("%d ",V);
			for(i=0;i<5;i++)
			{
				if(graph[V][i]==1)
					push(i);

			}

		}
	}

}


void disp_graph()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		 printf("%d ",graph[i][j]);
	
		printf("\n");	
	}


}





int main()
{  
	printf("\nTHE MATRIX OF GRAPH: \n");
	disp_graph();
	printf("\nTHE DFS TRAVERSAL OF VERTICES ARE: ");	
	bfs(0);
	

    return 0;
