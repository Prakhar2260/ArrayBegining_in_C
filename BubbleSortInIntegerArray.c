#include <stdio.h>

void swap(int *, int *);

int main()
{
    int n;
    printf("ENTER LENGTH OF ARRAY\n");
    scanf("%d", &n);

    int ar[n];

    printf("ENTER ARRAY ELEMENTS\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("SORTED ARRAY IS AS FOLLOWS\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
                swap(ar + j, ar + (j + 1));
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
