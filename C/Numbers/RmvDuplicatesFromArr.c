#include <stdio.h>

void RemoveNo(int position, int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i < position)
            a[i] = a[i];
        if (i >= position)
            a[i] = a[i + 1];
    }
}

int main(void)
{
    int size, count = 0;
    int k, position;

    printf("\nEnter the number of elements: ");
    scanf("%d", &size);

    int a[size], *temp;

    printf("Enter %d elements:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    temp = a;

    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size;)
            if (a[i] == a[j])
                RemoveNo(j, a, size--);
            else
                j++;

    printf("\nAfter removing repeated elements\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}