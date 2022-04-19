#include <stdio.h>

int main(void)
{
    while (1)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        if (!a && !b && !c)
            break;

        if ((b * b) + (c * c) == a * a || (c * c) + (a * a) == b * b || (a * a) + (b * b) == c * c)
            printf("Right\n");

        else
            printf("Wrong\n");
    }
}
