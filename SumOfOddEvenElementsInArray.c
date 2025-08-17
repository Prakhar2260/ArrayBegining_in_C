#include <stdio.h>

int main()
{
    int N, i, Esum, Osum;

    printf("ENTER ARRAY LENGTH\n");
    scanf("%d", &N);

    int A[N];

    printf("ENTER ARRAY ELEMENTS\n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    Esum = 0;
    Osum = 0;
    i = 0;

    while (i < N)
    {
        if (A[i] % 2 == 0)
        {
            Esum = Esum + A[i];
        }

        else
            Osum = Osum + A[i];

        i++;
    }

    printf("THE SUM OF ALL EVEN ELEMENTS IN GIVEN ARRAY=%d\n", Esum);
    printf("THE SUM OF ALL ODD ELEMENTS IN GIVEN ARRAY=%d\n", Osum);

    return 0;
}
