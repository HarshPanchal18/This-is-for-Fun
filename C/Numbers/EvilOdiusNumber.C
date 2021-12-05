/*  Evil numbers  - Entered number's binary contains even number of '1'
    Odius numbers - Non-Evil numbers

    E.X. - 3's binary = 11 (Evil)
          16's binary = 10000 (Odius)
*/
#include <stdio.h>

int main(void)
{
    int num, count = 0;
    // Check only a number....
    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2 == 1)
            count++;
        num /= 2;
    }
    if (count % 2 == 0)
        printf("Evil");
    else
        printf("Odius");

  
    // Evil numbers from 1 to N
    /*int i, limit, num, count = 0;

    printf("\nEnter last number: ");
    scanf("%d", &limit);

    printf("\nEvils are \n");
    for (i = 1; i <= limit; i++)
    {
        num = i;
        count = 0;

        while (num != 0)
        {
            if (num % 2 == 1)
                count++;

            num /= 2;
        }
        if (count % 2 == 0)
            printf("%d\n", i);
    }*/
}
