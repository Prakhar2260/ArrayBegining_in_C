include <stdio.h>

int main()
{

    int n,i,largest;

    printf("ENTER ARRAY LENGTH\n");
    scanf("%d",&n);

    int A[n];

    printf("ENTER ARRAY ELEMENTS\n");
    for(i=0;i<n;i++)
      {
       scanf("%d",&A[i]); 
      }

     largest=0;

     for(i=1;i<n;i++)
       {
        if(A[largest]<A[i])
         {
           largest=i; 
         }
       }

       printf("LARGEST ELEMENT IN GIVEN ARRAY IS AT %dth INDEX\n",largest);
       printf("LARGEST ELEMENT=%d",A[largest]);

       return 0;
}
