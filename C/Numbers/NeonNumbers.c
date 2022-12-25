#include <stdio.h>
#include <math.h>

/*
 * A neon number is a number where the sum of digits of square of the number is equal to the number.
 */

void neon(int n)
{
    int i, sum = 0;
    int t = pow(n, 2);

    while (t != 0)
    {
        sum += (t % 10);
        t /= 10;
    }
    if (sum == n)
        printf("%d is a Neon Number", n);
    else
        printf("%d is not a Neon Number", n);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    neon(n);
}

/*
Enter a number: 9
9 is a Neon Number

Enter a number: 144
144 is not a Neon Number
*/
