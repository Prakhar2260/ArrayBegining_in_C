#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char ch = *x;
    *x = *y;
    *y = ch;
}

void permute(char *st, int l, int r)
{
    if (l == r)
        printf("%s\n", st);

    else
    {
        for (int i = l; i <= r; i++)
        {
            swap((st + l), (st + i));
            permute(st, l + 1, r);
            swap((st + l), (st + i));
        }
    }
}

int main()
{
    char str[50];
    printf("ENTER THE STRING WHOSE PERMUTATIONS YOU WANT \n");
    scanf("%s", str);

    int length = strlen(str);
    printf("\n");
    printf("ALL POSSIBLE PERMUTATION OF GIVEN STRINGS ARE AS FOLLOWS\n");
    permute(str, 0, length - 1);

    return 0;
}
