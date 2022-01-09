#include <stdio.h>

void ReversePrint(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void PrintArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(void)
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter %d elements: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    PrintArr(arr, n);
    ReversePrint(arr, 0, n - 1);
    printf("\nReverse Array: ");
    PrintArr(arr, n);
}