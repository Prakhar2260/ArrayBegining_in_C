#include <stdio.h>

void reverse(int *ar, int n, int k)
{
    for (int i = k, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
}

void printarray(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void RightShift(int k, int n, int *ar)
{
    k = k % n;
    reverse(ar, n, k);
}

int main()
{
    int n = 7;
    int ar[n];

    int k;
    printf("ENTER SHIFT CONSTANT\n");
    scanf("%d", &k);
    ar[0] = 1;
    ar[1] = 2;
    ar[2] = 3;
    ar[3] = 4;
    ar[4] = 5;
    ar[5] = 6;
    ar[6] = 7;

    printf("\n");
    printf("ENTERED ARRAY IS AS FOLLOWS:\n");
    printarray(ar, n);
    printf("REVERSED ARRAY IS AS FOLLOWS\n");
    reverse(ar, n, 0);
    printarray(ar, n);

    RightShift(0, k, ar);
    RightShift(k, n, ar);
    printarray(ar, n);

    return 0;
}
