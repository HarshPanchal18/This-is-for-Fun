#include <stdio.h>
#include <string.h>
int main(void)
{
    int i, padding, len, j;
    char no[20], tempno[20];
    printf("\nEnter a number: ");
    scanf("%s", &no);
    printf("\nEnter the number of padding: ");
    scanf("%d", &padding);
    len = strlen(no);

    if (len <= padding && padding <= 20)
    {
        padding -= len;
        for (i = 0; i < padding; i++)
            tempno[i] = '0';

        for (j = i; j < len + i; j++)
            tempno[j] = no[j - i];

        tempno[j] = '\0';
        printf("\nResult: %s", tempno);
    }
    else
    {
        printf("\nNo. of padding is less than the number..... ");
    }
}

/*
OUTPUT: 
number: 4891
zeros: 7
Result: 0004891
*/