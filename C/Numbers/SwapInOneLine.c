#include <stdio.h>

int main(void)
{
    int a = 10, b = 2;
    a = (b = (a = a - b) + b) - a;
    printf("%d %d", a, b);
}

// 2 10
