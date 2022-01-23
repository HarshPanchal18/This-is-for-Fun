#include <stdio.h>

int main()
{
    int j, i, n, end, end1, endlow;
    printf("Enter a number: ");
    scanf("%d", &n);
    end1 = n;
    end = n - 1;
    endlow = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
            printf(" ");

        for (j = 1; j <= end1; j++)
            printf("%d", j);

        for (j = end; j > 0; j--)
            printf("%d", j);

        end--;
        end1--;

        printf("\n");
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < endlow; j++)
            printf(" ");

        for (j = 1; j <= i + 1; j++)
            printf("%d", j);

        for (j = i; j > 0; j--)
            printf("%d", j);

        endlow--;
        printf("\n");
    }
}
