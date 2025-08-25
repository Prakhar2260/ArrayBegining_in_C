#include <stdio.h>

int main()
{
    int n, se, count = 0, min, max, mid, maximum;
    printf("ENTER ARRAY LENGTH\n");
    scanf("%d", &n);

    int ar[n];

    printf("ENTER ARRAY ELEMENTS\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for (int i = 0; i < n; i++)
    {
        maximum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ar[maximum] < ar[j])
            {
                maximum = j;
            }
        }
        int temp = ar[i];
        ar[i] = ar[maximum];
        ar[maximum] = temp;
    }

    printf("\n");
    printf("SORTED ARRAY IS AS FOLLOWS:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);

    printf("\n");

    printf("ENTER SEARCH VALUE\n");
    scanf("%d", &se);

    min = 0;
    max = n - 1;
    mid = (min + max) / 2;
    while (mid >= min && mid <= max)
    {
        if (ar[mid] == se)
        {
            count = 1;
            break;
        }

        else if (ar[mid] > se)
            min = mid + 1;

        else if (ar[mid] < se)
            max = mid - 1;

        mid = (min + max) / 2;
    }

    if (count == 1)
        printf("SEARCH ITEM FOUND AT %d INDEX\n", mid);

    else
        printf("SEARCH VALUE IS ABSENT IN GIVEN ARRAY\n");

    return 0;
}
