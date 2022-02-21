#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int length, num, temp;

    printf("\nEnter the length of the password: ");
    scanf("%d", &length);

    printf("\nEnter the number of password you want to: ");
    scanf("%d", &num);

    srand((unsigned int)time(0) + getpid());
    while (num--)
    {
        temp = length;
        printf("\n");
        while (temp--)
        {
            putchar(rand() % 56 + 65);
            srand(rand());
        }
        temp = length;
    }
}