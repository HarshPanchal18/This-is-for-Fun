#include <stdio.h>
#include <math.h>

int Factorial(int n)
{
    int fact = 1;
    while (n != 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int Check(int n)
{
    int Sum = 0, temp = n;

    while (temp != 0)
    {
        Sum += Factorial(temp % 10);
        temp /= 10;
    }
    return Sum == n ? 1 : 0;
}

int main(void)
{
    int No = 40585;
    if (Check(No) == 1)
        printf("\nYes");
    else
        printf("\nNo");
}

/*
It's a number whose sum total of the factorials of each digit is equal to the number itself.

Here's what I mean by that:
"145" is a Krishnamurthy Number because,
1! + 4! + 5! = 1 + 24 + 120 = 145
"40585" is also a Krishnamurthy Number.
4! + 0! + 5! + 8! + 5! = 40585
"357" or "25965" is NOT a Krishnamurthy Number
3! + 5! + 7! = 6 + 120 + 5040 != 357
*/