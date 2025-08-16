#include <stdio.h>

int main()
{
    int n, i, j;

    printf("ENTER THE LENGTH OF GIVEN ARRAY\n");
    scanf("%d", &n);

    int A[n];

    printf("ENTER ARRAY ELEMENTS\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("ENTERED ARRAY IS AS FOLLOWS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    
    printf("REVERSED ARRAY IS AS FOLLOWS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }


    return 0;
}
