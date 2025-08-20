#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char **x, char **y)
{
  char *ch = *x;
  *x = *y;
  *y = ch;
}

void permute(char *A[], int l, int r)
{
  if (l == r)
  {
    for (int i = 0; i < r + 1; i++)
    {
      printf("%s ", A[i]);
    }
    printf("\n");
  }

  else
  {
    for (int i = l; i <= r; i++)
    {
      swap((A + l), (A + i));
      permute(A, l + 1, r);
      swap((A + l), (A + i));
    }
  }
}

int main()
{
  int n;
  printf("ENTER NUMBER OF STRINGS YOU WANT\n");
  scanf("%d", &n);

  char *Ar[n];

  char place[100];
  for (int i = 0; i < n; i++)
  {
    scanf("%s", place);
    Ar[i] = (char *)calloc(strlen(place) + 1, sizeof(char));
    strcpy(Ar[i], place);
  }

  printf("ENTERED STRINGS ARE AS FOLLOWS\n");
  for (int i = 0; i < n; i++)
  {
    printf("%s \n", Ar[i]);
  }

  permute(Ar, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    free(Ar[i]);
  }
}
