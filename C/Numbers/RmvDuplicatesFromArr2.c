#include <stdio.h>

int main(void)
{
    int size, count = 0, pos;
    printf("\nEnter the number of elements: ");
    scanf("%d", &size);
    int a[size - 1], *temp;

    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    temp = a;

    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size;)
            if (a[i] == a[j])
            {
                for (int k = j; k < size; k++)
                    a[k] = a[k + 1];
                size--;
            }
            else
                j++;

    printf("\nAfter removing repeated elements:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}