#include <stdio.h>
/*
A program to find two numbers whose
addition = a[0],
subtraction = a[1],
multiplication = a[2],
division = a[3]

print -1 if not possible
*/
int main(void)
{
    int a[4];

    printf("\nEnter 4 elements (+, -, *, /): ");
    for (int i = 0; i < 4; i++)
        scanf("%d", &a[i]);

    int n1, n2, flag = 0;

    for (int i = 0; i < a[0]; i++)
    {
        for (int j = a[0] - i; j >= 0; j--)
        {
            if (j - i == a[1] && j * i == a[2] && j / i == a[3])
            {
                n2 = i;
                n1 = a[0] - n2;
                flag = 1;
            }
        }
    }
    if (flag == 1)
        printf("\nNumbers are: %d %d", n1, n2);
    else
        printf("-1");
}
