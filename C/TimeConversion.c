#include <stdio.h>
int main()
{
    char s[10];
    int a[2], i;
    printf("Enter time in 12 hrs format (hh:mm:ssAM) or (hh:mm:ssPM) :-");
    // Taking input of time in string
    scanf("%s", s);

    a[0] = 0;

    // changing char value to int value
    a[1] = s[1] - '0';

    if ((s[0] == '1') && (s[8] == 'P') && (s[1] == '2'))
        for (i = 0; i < 8; i++)
            printf("%c", s[i]);

    else if ((s[0] == '0') && (s[8] == 'P'))
    {
        a[1] = a[1] + 12;
        printf("%d", a[1]);

        for (i = 2; i <= 7; i++)
            printf("%c", s[i]);
    }

    else if ((s[0] == '1') && (s[8] == 'A') && (s[1] == '2'))
    {
        a[1] = 0;
        printf("%d%d", a[0], a[1]);

        for (i = 2; i <= 7; i++)
            printf("%c", s[i]);
    }

    else if ((s[0] == '1') && (s[8] == 'P'))
    {
        a[1] = a[1] + 22;
        printf("%d", a[1]);

        for (i = 2; i <= 7; i++)
            printf("%c", s[i]);
    }

    else if (s[8] == 'A')
        for (i = 0; i < 8; i++)
            printf("%c", s[i]);

    return 0;
}

// 12 hrs to 24 hrs
/*
Enter time in 12 hrs format (hh:mm:ssAM) or (hh:mm:ssPM) :-11:45:12PM
23:45:12
*/
