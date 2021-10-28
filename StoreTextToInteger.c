#include <stdio.h>
int main(void)
{
    int i;
    printf("\nStart typing..");
    while (i = ~getchar())
        putchar(~i); // Disclaimer: It is going infinite ..............................................................
    return 0;
}