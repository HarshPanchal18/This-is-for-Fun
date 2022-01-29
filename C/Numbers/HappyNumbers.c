#include <stdio.h>

int IsHappy(int n)
{
    int temp, sum = 0;
    while (sum != 1 && sum != 4)
    {
        sum = 0;
        while (n > 0)
        {
            temp = n % 10;
            sum += (temp * temp);
            n /= 10;
        }
        n = sum;
    }
    if (sum == 1)
        return 1;
    else
        return 0;
}

int main(void)
{
    int i, no, limit;
    //check a number
    /*
    printf("\nEnter a number:");
    scanf("%d", &no);

    if (IsHappy(no) == 1)
        printf("%d\tHappy!\n", no);
    else
        printf("%d is not happy!\n", no);
    */

    // From 1 to N
    /*
    printf("\nEnter last number: ");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        if (IsHappy(i) == 1)
            printf(" %d\n", i);
    }
    */
}

/*
    23 = 2^2 + 3^2 = 4 + 9 = 13
    13 = 1^2 + 3^2 = 1 + 9 = 10
    10 = 1^2 + 0^2 = 1 + 0 = 1      <- Last answer must be 1
*/
