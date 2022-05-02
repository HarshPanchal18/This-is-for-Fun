#include <stdio.h>

/*
A prime number is Super Prime if it is a sum of two primes. Find all the Super Primes upto N

Example 1:

Input:
N = 5
Output: 1
Explanation: 5 = 2 + 3, 5 is the
only super prime

Example 2:

Input:
N = 10
Output: 2
Explanation: 5 and 7 are super primes
*/

int isPrime(int n)
{

    int flag = 1;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0 || (n - 2) % i == 0)
            return 0;

    return flag;
}

int superPrimes(int n)
{
    int res = 0;
    int flag = 1;

    for (int i = 5; i <= n; i += 2)
    {
        flag = isPrime(i);
        if (flag)
            res++;
    }
    return res;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", superPrimes(n));
}
