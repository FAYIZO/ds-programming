#include<stdio.h>

int top,s[10],size;

void push(int item)
{ 
    
    if(top>=size-1){
        printf("Stack is full\n");
    }
    else{
        
        
        top++;
        s[top]=item;

    }
}
void pop()
{
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The deleted item: %d \n",s[top]);
        top--;
        

    }
}
void Disp()
{
 int i;
 if(top>=0){
 printf("---------------Stack Elements------------------\n");
   
    for(i=top;i>=0;i--){
        printf("%d\n",s[i]);
    }
 }
 else 
 {
    printf("Stack empty\n");
 }
}

int main()
{ int n,item;
    top=-1;
    printf("Enter the size of The Stack(max10)\n");
    scanf("%d",&size);
    if(size<=10&&size>1){
    while(1){
            
        printf("-------BASIC STACK OPERATION--------\n0)exit\n1)push \n2)pop \n3)Display\n\nEnter N\n ");
        scanf("%d",&n);
        if(n==0){
            printf(" bye bye !!!\n");
            break;
       		}
        else if(n==1)
        {
	printf("Enter The Item\n");
        scanf("%d",&item);	
	push(item);
 	}
        else if(n==2)
        {pop();}
        else if(n==3)
        {Disp();}
        else
        printf("you are wrang\n\n");
          
        }
    }
    else printf("size issue!!!!\n");
   

    return 0;

}
