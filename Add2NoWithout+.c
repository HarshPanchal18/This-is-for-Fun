#include <stdio.h>
#include <conio.h>
int main(void)
{
    int n1, n2, sum;

    printf("\nEnter two numbers: ");
    scanf("%d%d", &n1, &n2);

    sum = n1 - (-n2);

    printf("\nAddition is : %d ", sum);
}