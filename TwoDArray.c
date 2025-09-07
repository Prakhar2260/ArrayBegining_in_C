

# include <stdio.h>

void main()
{
 int n,m;
 printf("ENTER HOW MANY ROWS YOU WANT\n");
 scanf("%d",&n);

 printf("ENTER HOW MANY COLUMNS YOU WANT\n");
 scanf("%d",&m);

 printf("\n");

 int ar[n][m];
 printf("ENTER ARRAY ELEMENTS\n");
 for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
       scanf("%d",&ar[i][j]); 
    }
  }
 printf("\n");

 printf("ENTERED ARRAY IS AS FOLLOWS:\n");
 for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
       printf("%d  ",ar[i][j]); 
    }
    printf("\n");
  }
 printf("\n");
  
}
