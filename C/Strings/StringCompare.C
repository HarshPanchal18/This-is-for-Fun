#include <stdio.h>

int StrCmp(char *s1, char *s2)
{
    char *p1 = s1;
    char *p2 = s2;

    while (*p1 != '\0' && *p2 != '\0')
    {
        if (*p1 > *p2)
            return 1;
        else if (*p1 < *p2)
            return -1;

        p1++;
        p2++;
    }

    if (p1 == p2)
        return 0;
    else if (*p1 == '\0')
        return -1;
    else if (*p2 == '\0')
        return 1;
}

int main(void)
{
    char *str1 = "123bc";
    char *str2 = "123Abc";

    if (StrCmp(str1, str2) == 0)
        printf("%s = %s\n", str1, str2);

    else if (StrCmp(str1, str2) > 0)
        printf("%s > %s\n", str1, str2);

    else
        printf("%s < %s\n", str1, str2);
}
