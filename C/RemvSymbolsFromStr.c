#include <stdio.h>

int main(void)
{
    char s1[20], s2[20];
    int i = 0, j = 0;
    printf("\nMAximum String Size = 20");
    printf("\nEnter String: ");
    scanf("%20s", s1);

    while (s1[i] != '\0')
    {
        if ((s1[i] > 'a' && s1[i] < 'z') || (s1[i] > 'A' && s1[i] < 'Z'))
        {
            s2[j] = s1[i];
            j++;
        }
        i++;
    }
    s2[j] = '\0';

    printf("\nOutput String: %s", s2);
}