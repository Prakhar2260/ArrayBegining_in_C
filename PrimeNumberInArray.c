#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("ENTER ARRAY LENGTH \n");
    scanf("%d", &n);

    int A[n];

    printf("ENTER ARRAY ELEMENTS\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 2; j <= A[i]; j++)
        {
            if (A[i] % j == 0)
                count++;
        }
        if (count == 1)
            printf("%d at %d index is Prime Number\n", A[i], i);
    }

    return 0;
}
