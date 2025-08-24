#include <stdio.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int n, min;
  printf("ENTER ARRAY LENGTH\n");
  scanf("%d", &n);

  int ar[n];

  printf("ENTER ARRAY ELEMENTS\n");

  for (int i = 0; i < n; i++)
    scanf("%d", &ar[i]);

  printf("ENTERED ARRAY IS AS FOLLOWS:\n");
  for (int i = 0; i < n; i++)
    printf("%d ", ar[i]);

  for (int i = 0; i < n; i++)
  {
    min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (ar[j] < ar[min])
        min = j;
    }
    swap(&ar[i], &ar[min]);
  }
  printf("\n");
  printf("SORTED ARRAY IS AS FOLLOWS:\n");
  for (int i = 0; i < n; i++)
    printf("%d ", ar[i]);

  return 0;
}
