#include <stdio.h>

int main(void)
{
    long int n, x, s;

    printf("\nEnter a number: ");
    scanf("%ld", &n);

    while (n >= 10)
    {
        x = n;
        s = 0;

        while (x > 0)
        {
            s += (x % 10);
            x /= 10;
        }
        n = s;
    }
    printf("\nSuper Digit of the given number is %ld\n", n);
}

/*
    2014 = 2 + 0 + 1 + 4 = 7

    9875 = 9 + 8 + 7 + 5 = 29 = 2 + 9 = 11 = 1 + 1 = 2
*/