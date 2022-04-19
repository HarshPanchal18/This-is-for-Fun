#include <stdio.h>

/*
Given a number N, find number of set bits in binary rep. it
N = 13, Binary = 1101, Output = 3
*/

int countBits(int n)
// LogN+1
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n & 1);
        n = n >> 1;
    }
    return ans;
}

int countBitFast(int n)
// LogN
{
    int ans = 0;
    while (n > 0)
    {
        n &= (n - 1);
        ans++;
    }
    return ans;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d \n", countBits(n));
    printf("%d \n", countBitFast(n));
    printf("%d \n", __builtin_popcount(n)); // system defined
}
/*
58 ( binary - 111010 )
4
4
4
*/
