#include <stdio.h>
#include <math.h>

float factorial(float n)
{
    // for long loong double
    // return tgammal(n + 1.0);

    // for float
    return tgammaf(n + 1);
}

int main(void)
{
    float t;
    t = factorial(6);
    printf("%f", t);
}
