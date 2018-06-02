#include<stdio.h>
void maxheapify(int A[],int n,int i)
{  int t;
    int l=2*i;
    int r=2*i+1;
    int larg=i;
    if(l<n && A[l]>A[larg])
    {
        larg=l;
    }
    if(r<n && A[r]>A[larg])
    {
        larg=r;
    }
    if(i!=larg)
    {
        t=A[i];
        A[i]=A[larg];
        A[larg]=t;
        maxheapify(A,n,larg);
    }

}
void heap_sort(int A[],int n)
{
    int k,temp,i;
    for(k=n/2-1;k>=0;k--)
    {
        maxheapify(A,n,k);
    }
    for(i=n-1;i>=1;i--)
    {
     temp=A[0];
     A[0]=A[i];
     A[i]=temp;
     maxheapify(A,i,0);
    }

}
int main()
{  int i,j,n;
    printf("Enter size of array::");
    scanf("%d",&n);
    int A[n];
    printf("Enter array elements::");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    heap_sort(A,n);
    printf("Sorted Array is::");
    for(i=0;i<n;i++)
    {
        printf("%d",A[i]);
        printf(" ");
    }
}

