#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0;
    long int temp = 0;
    char str[20];

    printf("\nEnter string: ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 57) // if ith character of str is a number
            temp = temp * 10 + (str[i] - 48);
        i++;
    }
    printf("\nNumber in Integer: %ld", temp);
}

/*
Output:

Enter string        : nfjkr9935
Number in Integer   : 9935

*/