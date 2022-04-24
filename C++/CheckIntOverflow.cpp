#include <iostream>

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
    // increase the value of a if returns false
    std::cout << "\nSum of " << a << " and " << b << " causes integer overflow: " << (IntOverFLow(a, b) ? "true" : "false");
}
