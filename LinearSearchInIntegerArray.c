#include <stdio.h>

int main()
{
    int n, se, count, i = 0;
    printf("ENTER ARRAY LENGTH\n");
    scanf("%d", &n);

    int ar[n];

    printf("ENTER ARRAY ELEMENTS\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    printf("ENTER SEARCH VALUE\n");
    scanf("%d", &se);

    for (i = 0; i < n; i++)
    {
        if (ar[i] == se)
        {
            count = 1;
            break;
        }
    }

    if (count == 1)
        printf("SEARCH ITEM FOUND AT %d INDEX\n", i);

    else
        printf("SEARCH VALUE IS ABSENT IN GIVEN ARRAY\n");

    return 0;
}
