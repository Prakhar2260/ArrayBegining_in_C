#include <stdio.h>
#include <string.h>

void swap(char m[][100], int a, int b)
{
  char temp[100];
  strcpy(temp, m[a]);
  strcpy(m[a], m[b]);
  strcpy(m[b], temp);
}

void permute(char s[][100], int l, int r)
{
  if (l == r)
  {
    for (int i = 0; i < r + 1; i++)
    {
      printf("%s ", s[i]);
    }
    printf("\n");
  }

  else
  {
    for (int i = l; i <= r; i++)
    {
      swap(s, l, i);
      permute(s, l + 1, r);
      swap(s, l, i);
    }
  }
}

int main()
{
  int n;
  printf("ENTER NUMBER OF STRINGS YOU WANT\n");
  scanf("%d", &n);

  char S[n][100];

  printf("ENTER %d STRINGS \n", n);
  for (int i = 0; i < n; i++)
    scanf("%s", S[i]);

  printf("\n");

  for (int i = 0; i < n; i++)
    printf("%s\n", S[i]);

  permute(S, 0, n - 1);

  return 0;
}
