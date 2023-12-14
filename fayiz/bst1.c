#include<stdio.h>
#include<stdlib.h>
struct bstnode
{
	
	struct bstnode *lchild;
	int key;
	struct bstnode *rchild;
	
};
struct bstnode *root=NULL;
void insert(int item)
{
	
	struct bstnode *newnode;
	struct bstnode *ptr=root;
	struct bstnode *ptr1 = NULL;
	int flag = 0;
	newnode = (struct bstnode *)malloc(sizeof(struct bstnode));
	newnode->lchild=NULL;
	newnode->key=item;
	newnode->rchild=NULL;
	while((ptr!=NULL)&&(flag==0))
	{
		if(item<ptr->key)
		{
			ptr1=ptr;
			ptr=ptr->lchild;
		}
		else
		{
			if(item>ptr->key)
			{
				ptr1=ptr;
				ptr=ptr->rchild;
			}
			else
		{
				if(item==ptr->key)
				{
					flag=1;
					printf("failed\n");
				}
		}
	  }

	}
	if(root==NULL)
	{	
		root=newnode;
	}
	else
	{
		if(item<ptr1->key)
		{

			ptr1 -> lchild=newnode;
		}

		else
		{
			ptr1->rchild=newnode;
		}
	}
}
void inorder(struct bstnode *ptr)
{
	if(ptr!= NULL)
	{
		inorder(ptr->lchild);
		printf("%d",ptr->key);
		inorder(ptr->rchild);
	}

}
void search(int item)
{
	struct bstnode *ptr=root;
	int flag=0;
	while((ptr!=NULL)&&(flag==0))
	{
		if(item<ptr->key)
		{
			ptr=ptr->lchild;
		}
		else
		{
			if(item>ptr->key)
			{
				
				ptr=ptr->rchild;
			}
			else
			{
				if(item==ptr->key)
				{
					flag=1;
				}
			}
		
		}
	}
	if(flag==1)
	{
		printf("key found");
	}
	else
	{
		printf("key not found\n");
	}
}
struct bstnode * minimum(struct bstnode *ptr)
{
	while(ptr->lchild != NULL)
	
		ptr=ptr->lchild;
	return(ptr);
}
struct bstnode * successor(struct bstnode *ptr)
{
	if(ptr->rchild != NULL)
		return(minimum(ptr->rchild));
	return(ptr);
}
	
void delete(int item)
{
	struct bstnode *newnode;
	struct bstnode *ptr=root;
	struct bstnode *ptr1=NULL;
	int flag=0;
	
	while((ptr!=NULL)&&(flag==0))
	{
		if(item<ptr->key)
		{
			ptr1=ptr;
			ptr=ptr->lchild;
		}
		else
		{
			if(item>ptr->key)
			{
				ptr1=ptr;
				ptr=ptr->rchild;
			}
			else
		{
				if(item==ptr->key)
				{
					flag=1;
					
				}
		}
	  }
	}
	//case1:no child nodes
	if((ptr->lchild==NULL)&&(ptr->rchild==NULL))
	{
		if(ptr==ptr1->lchild)
		{
			ptr1->lchild=NULL;
		}
		else
		{
			ptr1->rchild=NULL;
			free(ptr);
		}
	}
	else
	{
		//case3:if both child nodes exist
		if((ptr->lchild != NULL) && (ptr->rchild != NULL))
		{
			int temp;
			struct bstnode *succr;
			succr=successor(ptr);
			temp=succr->key;
			delete(temp);
			ptr->key=temp;
		}
	}

	}

	

		


	
int main()
{
	insert(5);
	insert(4);
	insert(7);
	insert(6);
	insert(8);

	inorder(root);
	struct bstnode *succr=successor(root);
	printf("\nsuccessor of root is %d\n",succr->key);
	
	delete(5);
	inorder(root);
}

	

bst.c
Displaying bst.c.
