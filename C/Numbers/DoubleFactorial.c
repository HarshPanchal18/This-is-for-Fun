#include <stdio.h>

int iterativeFact(int n)
{
    int res = 1;

    for (int i = n; i > 0; i -= 2)
    {
        if (n == 0 || n == 1)
            return res;
        else
            res *= i;
    }
}

int main(void)
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    int r = iterativeFact(n);
    printf("%d\n", r);
}
