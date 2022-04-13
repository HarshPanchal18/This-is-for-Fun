#include <stdio.h>
#include <string.h>

// Replace all the spaces in a string with '%20'

void urlify(char *str, int len)
{
    int space = 0;
    int i;

    for (i = 0; i < len; i++)
        if (str[i] == ' ')
            space++;

    int extendLen = len + (2 * space);
    i = extendLen - 1;

    for (int j = len - 1; j >= 0; j--)
    {
        if (str[j] != ' ')
            str[i--] = str[j];
        else
        {
            str[i--] = '0';
            str[i--] = '2';
            str[i--] = '%';
        }
    }
}

int main()
{
    char str[] = "My Name is Harsh  ";
    printf("Before Operation: ");
    puts(str);

    urlify(str, strlen(str));

    printf("\nAfter Operation: ");
    puts(str);
}
