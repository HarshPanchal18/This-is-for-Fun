#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 1;
    if (1)
        i = j, j += 1, printf("%d %d\n", i, j); // multiple statements are all executed
    else
        printf("failed\n");
}