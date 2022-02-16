#include <stdio.h>

int Anagram(char s1[], char s2[])
{
    int first[200] = {0};
    int second[200] = {0};

    int i = 0;
    while (s1[i] != '\0')
    {
        first[s1[i]-'a']++;
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        second[s2[i]-'a']++;
        i++;
    }

    for (i = 0; i < 26; i++)
        if (first[i] != second[i])
            return 0;
    return 1;
}

int main(void)
{
    char s1[50], s2[50];
    int check;

    printf("\nEnter String1: ");
    gets(s1);

    printf("\nEnter String2: ");
    gets(s2);

    check = Anagram(s1, s2);

    if (check == 1)
        printf("\n%s & %s are Anagram ", s1, s2);
    else
        printf("\n%s & %s are not Anagram ", s1, s2);
}

/*
    Yeh => hYe
*/
