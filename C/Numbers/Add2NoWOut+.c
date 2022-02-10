#include <stdio.h>

int add(int a, int b)
{
    // return printf("%*d%*d", a, '\r', b, '\r');
    return printf("%*c%*c", a, '\r', b, '\r');
}

int main(void)
{
    int n1, n2;

    printf("\nEnter Two Numbers: ");
    scanf("%d%d", &n1, &n2);

    for (int i = 1; i < n1 + 1; i++)
        for (int j = 1; j < n2 + 1; j++)
            printf("%d + %d = %d", i, j, add(i, j));
}