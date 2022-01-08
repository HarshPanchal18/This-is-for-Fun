#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    printf("\nEnter the size of the Array: ");
    scanf("%d", &size);

    if (size < 0)
        size = size * (-1);

    int *a = (int *)malloc(sizeof(int) * size);

    printf("\nEnter %d elements: \n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    int flag;

    printf("\nUnique Elements of array are:\n");
    for (int i = 0; flag = 0, i < size; i++)
    {
        for (int j = 0; j <= size; j++)
            if (i != j && a[i] == a[j])
                flag++;
        if (flag == 0)
            printf("%d\t", a[i]);
    }
}