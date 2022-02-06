#include <stdio.h>

int main(void)
{
    int t, num;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &num);

        int c = 0, d = 0;
        int x = num;

        /*
        num,x = 45
        d = 5, 5!=0 && 45 % 5 == 0 , => c=1
        */

        while (x > 0)
        {
            d = x % 10;
            if (d != 0 && num % d == 0)
                ++c;
            x /= 10; // slicing
        }
        printf("\n%d\n", c);
    }
}