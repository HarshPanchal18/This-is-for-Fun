#include <stdio.h>

int main(void)
{
    int i;
    while (i = ~getchar())
        putchar(~i);
}

// ^Z to terminate
