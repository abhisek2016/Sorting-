#include<stdio.h>
# define In 999999;
int Merge(int A[],int p,int r,int q)
    {   int n1,n2,k,s;
        n1=r-p+1;
        n2=q-r;
        int B[n1+1],C[n2+1];
        for(k=1;k<=n1;k++)
        {
            B[k]=A[k+p-1];
        }
        B[n1+1]=In;
        for(s=1;s<=n2;s++)
        {
            C[s]=A[r+s];
        }
        C[n2+1]=In;
        int d=1,e=1;
        for(k=p;k<=q;k++)
        {
            if(B[d]>=C[e])
            {
                A[k]=C[e];
                e++;
            }
            else
            {
                A[k]=B[d];
                d++;
            }
        }

    }
int Merge_Sort(int A[],int p,int q)
    {  int r;
        if(p<q)
        {
            r=(p+q)/2;
            Merge_Sort(A,p,r);
            Merge_Sort(A,r+1,q);
            Merge(A,p,r,q);
            return 0;
        }

    }
int main(){
    int i,j,k,p,q,r,T;
    { int n;
    printf("Size of array:");
    scanf("%d",&n);
    int A[n];
    printf("Enter array element:::");
    for(j=1;j<=n;j++)
    {
        scanf("%d",&A[j]);
    }
    Merge_Sort(A,1,n);
    for(i=1;i<=n;i++)
    {
      printf("%d",A[i]);
      printf(" ");
    }
    }
}
