// Pronic Number  = multiply of two Consecutive Numbers
// 72 = 8 * 9
#include <stdio.h>

int main(void)
{
    int i, flag, num, limit;
    /*printf("\nEnter a number: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        if (i * (i + 1) == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is a Pronic Number (%d * %d)", num, i, i + 1);
    else
        printf("%d is not a Pronic number", num);*/

    // From 1 to N

    printf("\nEnter last number: ");
    scanf("%d", &limit);

    for (i = 0; i <= limit; i++)
    {
        flag = 0;

        for (num = 0; num <= i; num++)
        {
            if (num * (num + 1) == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("%d\n", i);
    }
}