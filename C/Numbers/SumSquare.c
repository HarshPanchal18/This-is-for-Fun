/*
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

long long int a(int n)
{
    long long int ans = 1;
    ans *= n * (n + 1) * ((2 * n) + 1);
    ans /= 6;
    return ans;
}

int main(void)
{
    long long int sumOfSq, squareOfSum;
    sumOfSq = a(100);
    squareOfSum = pow((50 * 101), 2);
    printf("\n%lld", squareOfSum);
    printf("\n%lld", sumOfSq);
    printf("\n%lld", squareOfSum - sumOfSq);
}
