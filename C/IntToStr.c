#include <stdio.h>

int main(void)
{
    int no;      // user input
    int len = 0; // length of the no
    int i = 0;

    char strTemp[10]; // hold temporary string
    char str[10];     // hold result

    printf("\nEnter a number : ");
    scanf("%d", &no);
    while (no > 0)
    {
        strTemp[len++] = (no % 10) + 48; // works on ASCII value
        no /= 10;
    }
    strTemp[len] = '\0';

    // strTemp contains the number in reverse order, so we reverse the string to get the desired output

    for (int j = 0, i = len - 1; j < len; j++, i--)
        str[j] = strTemp[i];
    str[len] = '\0';

    printf("Number in string: %s\n", str);
}