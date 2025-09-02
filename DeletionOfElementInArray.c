#include <stdio.h>

int main()
{
    int n, position;
    printf("ENTER ARRAY LENGTH\n");
    scanf("%d", &n);

    int ar[n];

    printf("ENTER ARRAY ELEMENTS\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    printf("ENTERED ARRAY IS AS FOLLOWS\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);

    printf("\n");

    printf("ENTER THE POSITION WHERE YOU WANT DELETION\n");
    scanf("%d", &position);

    for (int i = position - 1; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }

    n = n - 1;
    ar[n];

    printf("ARRAY AFTER DELETION OF ELEMENT AT GIVEN POSITION IS AS FOLLOWS\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);

    return 0;
}
