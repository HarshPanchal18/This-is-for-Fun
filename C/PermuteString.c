// Possible spells of the string

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
        printf("%s\n", a);
    else
    {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            permute(a, i + 1, n);
            swap((a + j), (a + j));
        }
    }
}

int main(void)
{
    char str[20];
    printf("\nEnter String: ");
    scanf("%s", str);
    permute(str, 0, strlen(str) - 1);
}