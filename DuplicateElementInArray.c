#include <stdio.h>

int main()
{
    int n;
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
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != -1)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (ar[i] == ar[j])
                {
                    count++;
                    ar[j] = -1;
                }
            }
            printf("Duplicate of %d = %d\n", ar[i], count);
        }

        else
            continue;
    }

    return 0;
}
