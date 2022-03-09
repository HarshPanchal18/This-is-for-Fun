// Ugly numbers are numbers whose only prime factor is 2, 3 or 5

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    printf("\nEnter number: ");
    scanf("%d", &n);

    bool x = false;

    while (n != 1)
    {
        if (n % 5 == 0)
            n /= 5;

        else if (n % 3 == 0)
            n /= 3;

        else if (n % 2 == 0)
            n /= 2;

        else
        {
            printf("Not an Ugly number..");
            x = true;
            break;
        }
    }
    if (!x)
        printf("It's an Ugly Number..");
}

/*
Enter number: 7
Not an Ugly number..

Enter number: 10
It's an Ugly Number..

Enter number: 21
Not an Ugly number..
*/
