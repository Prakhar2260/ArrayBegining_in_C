#include <stdio.h>

// Reverse a portion of array between indices start and end
void reverse(int *ar, int start, int end)
{
    while (start < end)
    {
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;
        end--;
    }
}

void printarray(int *ar, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    printf("\n");
}

void RightShift(int *ar, int n, int k)
{
    k = k % n; // handle k > n

    // Step 1: reverse the entire array
    reverse(ar, 0, n - 1);

    // Step 2: reverse first k elements
    reverse(ar, 0, k - 1);

    // Step 3: reverse remaining n-k elements
    reverse(ar, k, n - 1);
}

int main()
{
    int n = 7;
    int ar[] = {1, 2, 3, 4, 5, 6, 7};

    int k;
    printf("ENTER SHIFT CONSTANT\n");
    scanf("%d", &k);

    printf("ENTERED ARRAY IS:\n");
    printarray(ar, n);

    RightShift(ar, n, k);

    printf("ARRAY AFTER RIGHT SHIFT BY %d:\n", k);
    printarray(ar, n);

    return 0;
}
