#include <stdio.h>
int puts(const char *str)
{
    fputs("Hello, world!\n", stdout);
    // Don't call main here, it'll go infinite hahahahahaha!!
}
int main(void)
{
    printf("Why are you ignoring me!!\n");
}