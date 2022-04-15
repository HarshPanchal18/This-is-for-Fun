/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int prod)
{
    int revProd = 0;
    while (prod > 0)
    {
        revProd *= 10;
        revProd += (prod % 10);
        prod /= 10;
    }
    return revProd;
}

int main(void)
{
    int product = 0, palin = 0;

    int m, i, j;
    printf("\nEnter the number of digits: ");
    scanf("%d", &m);

    int Fprod = pow(10, m) - 1;
    int Sprod = pow(10, m - 1) - 1;

    for (i = Fprod; i > Sprod; i--)
    {
        for (j = i; j > Sprod; j--)
        {
            product = i * j;
            if ((product == reverse(product)) && (product > palin))
                palin = product;
        }
    }
    printf("%d\n", palin);
}

/*
=> 906609 (Largest 3 digit palindrome made from the product of three digit number 993 * 913)
*/
