# include <stdio.h>

void swap(int *x,int *y)
    {
      int temp=*x;
      *x=*y;
      *y=temp;  
    }

void permute(int *A,int l,int r)
    {
      if(l==r)
        {
            for(int i=0;i<=r;i++)
               {
                 printf("%d ",*(A+i));
               }
        
            printf("\n");
        }   
        
      else
      {
        for(int i=l;i<=r;i++)
           {
            swap((A+l),(A+i));
            permute(A,l+1,r);
            swap((A+l),(A+i));
           }
      }  
    }

int main()
{
  int N;
  printf("ENTER LENGTH OF ARRAY\n");
  scanf("%d",&N);

  int Ar[N];
  
  printf("ENTER ARRAY ELEMENTS\n");
  for(int i=0;i<N;i++)
    scanf("%d",&Ar[i]);

    printf("\n");
    printf("ALL POSSIBLE PERMUTATION OF GIVEN ARRAY IS AS FOLLOW\n");

    permute(Ar,0,N-1);

    return 0;
}
