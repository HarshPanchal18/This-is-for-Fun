#include <iostream>
#include <math.h>

using namespace std;

long double factorial(long double n)
{
    return tgammal(n + 1.0);
}

int main(void)
{
    long long t;
    t = factorial(6);
    cout << t;
}
