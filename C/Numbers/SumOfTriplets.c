#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n - 2 - i; j++)
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

void tripletSum(int a[], int n, int target)
{
    int j, k;
    for (int i = 0; i < n; i++)
    {
        j = i + 1;
        k = n - 1;

        while (j < k)
        {
            if (a[i] + a[j] + a[k] == target)
            {
                printf("\n%d, %d and %d", a[i], a[j], a[k]);
                j++;
                k--;
            }
            else if (a[i] + a[j] + a[k] > target)
                k--;
            else
                j++;
        }
    }
}

int main(void)
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int a[n];

    printf("\nEnter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the target: ");
    int target;
    scanf("%d", &target);

    sort(a, n); // sort for easier checking in forward direction

    tripletSum(a, n, target);

    free(a);
}

/*
Enter the number of elements: 5
Enter the elements:
7 8 4 9 5
Enter the target: 19
4, 7 and 8
*/
