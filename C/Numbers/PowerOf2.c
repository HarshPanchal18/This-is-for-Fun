/*
Given a number , check whether the number is power of 2 or not.
We can check this by doing some bitwise operation.
Bitwise operations are best because they perform the operation in least possible time.
*/

#include <stdio.h>

int check(int num)
{
    /* if bitwise and of number and number - 1 is zero
    then we can say that number is power of 2
    otherwise it is not.*/

    if ((num & (num - 1)) == 0)
        return 1;

    return 0;
}

int main(void)
{
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    if (check(number))
        printf("%d is power of 2", number);
    else
        printf("%d is not power of 2", number);
}
