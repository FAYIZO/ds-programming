#include <stdio.h>
void sort(int ar[10],int n)
    {int i,j,temp;
    	for (i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(ar[i]>ar[j])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }

    }

void merg(int a[20],int b[10],int n,int s,int c[20])
    {
        int i,j,z;
        for(i=0;i<n;i++)
        {  
		c[i]=a[i];
        }
        z=i;
	i=0;
        n=n+s;
        for (j=z;j<n;j++)
            {
                c[j]=b[i];
                i++;
            }
       
    }

int main()
{
      int i,n,s;
      int a[10],b[10],c[20];
      while(1){
        
        printf("\nEnter the number of elements for first array(max 10) or '0' to exit\n");
        scanf("%d",&n);
        
        if(n==0){break;}
        else{
        if(n>0 && n<=10)
        {
            printf("----------enter the numbers to first array-----------\n\n");
            for(i=0;i<n;i++)
            {
	   printf("enter the number\n");
            scanf("%d",&a[i]);
            }
        }
        else {
            printf("ary limit exceeded");
            break;

        }

        printf("enter the number of elemnets for second array(max 10):\n");
        scanf("%d",&s);
        if(s>0 && s<=10)
        {
            printf("-------------enter the numbers to second array-----------\n\n");
            for(i=0;i<s;i++)
            {
	   printf("enter the number\n");
            scanf("%d",&b[i]);
            }
        }
        else{
            printf("ary limit exceeded");
            break;
        }
	sort(a,n);
	printf("1st sorted arry\n");
	for(i=0;i<n;i++)
        {
         printf(" %d ",a[i]);
        } 
	sort(b,s);
	printf("\n2nd sorted arry\n");
	for(i=0;i<n;i++)
        {
         printf(" %d ",b[i]);
        } 
        merg(a,b,n,s,c);
        n=n+s;
        printf("\nmerged and sorted array\n");
        for(i=0;i<n;i++)
        {
         printf(" %d ",c[i]);
        } 
        }
      }

return(0);
}
