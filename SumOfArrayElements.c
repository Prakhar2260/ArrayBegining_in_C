#include <stdio.h>

int main()
{
    int N, i, sum;

    printf("ENTER ARRAY LENGTH\n");
    scanf("%d", &N);

    int A[N];

    printf("ENTER ARRAY ELEMENTS\n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    sum = 0;
    i = 0;

    while (i < N)
    {
        sum = sum + A[i];
        i++;
    }

    printf("THE SUM OF ALL ELEMENTS OF GIVEN ARRAY=%d", sum);

    return 0;
}
