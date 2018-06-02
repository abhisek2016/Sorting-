#include<stdio.h>
int Partion(int A[],int p,int r)
{
     int temp,temp1,temp2,j,i;
     i=p-1;
     temp=A[r];
     for(j=p;j<r;j++)
     {
         if(A[j]<=temp)
         {   i=i+1;
             temp1=A[i];
             A[i]=A[j];
             A[j]=temp1;
         }
     }
     temp2=A[i+1];
     A[i+1]=A[r];
     A[r]=temp2;
     return(i+1);
}
void Quick_Sort(int A[],int p,int r)
{   if(p<r){
    int q=Partion(A,p,r);
    Quick_Sort(A,p,q-1);
    Quick_Sort(A,q+1,r);
           }
}

int main()
{
  printf("Enter size of array:");
  int n,a,b;
  scanf("%d",&n);
  int A[n];
  printf("Enter array:");
  for(a=1;a<=n;a++)
  {
      scanf("%d",&A[a]);
  }
  Quick_Sort(A,1,n);
  printf("Sorted array:");
  for(b=1;b<=n;b++)
  {
      printf("%d",A[b]);
      printf("    ");
  }
    return 0;
}
