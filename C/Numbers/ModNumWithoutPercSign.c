#include <stdio.h>

int main(void)
{
    int n1, n2, mod;

    printf("Enter two numbers:\n");
    scanf("%d%d", &n1, &n2);
    mod = n1 - n2 * (n1 / n2);

    if ((n1 >= 0 && n2 >= 0) || (n1 < 0 && n2 < 0))
        printf("Mod of %d and %d is %d", n1, n2, mod);
    else
        printf("Mod of %d and %d is %d", n1, n2, 0 - mod);
}