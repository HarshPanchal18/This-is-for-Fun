#include <stdio.h>
#include <stdbool.h>

bool IntOverFLow(int a, int b)
{
    int c = a + b;

    if ((a > 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0))
        return true;
    else
        return false;
}

int main(void)
{
    int a = 2147483640;
    int b = 10;

    printf("\nSum of %d and %d causes integer overflow ? : %s ", a, b, (IntOverFLow(a, b) ? "true" : "false"));

    // printf((IntOverFLow(a, b) ? "true" : "false"));
}