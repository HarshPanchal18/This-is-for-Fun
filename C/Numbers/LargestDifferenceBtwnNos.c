#include <stdio.h>

int main(void)
{
    int maxx = 0, n, high = 0, low = 0;
    printf("\nEnter the number of elements:");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[j] - a[i] > maxx)
            {
                maxx = a[j] - a[i];
                high = a[j];
                low = a[i];
            }

    printf("\nMax. difference is %d between %d and %d\n", maxx, high, low);
}