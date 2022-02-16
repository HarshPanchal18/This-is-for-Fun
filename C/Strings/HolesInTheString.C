#include <stdio.h>

int main(void)
{
    int cases, CharCount = 0;
    char text[20], *c;

    printf("\nEnter the number of String(s): ");
    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%s", &text);
        c = &text[0];
        while (*c != '\0')
        {
            if (*c == 'A' || *c == 'D' || *c == 'O' || *c == 'P' || *c == 'Q' || *c == 'R' ||
                *c == 'a' || *c == 'b' || *c == 'd' || *c == 'e' || *c == 'g' || *c == 'o' || *c == 'p' || *c == 'q')
                CharCount++;
            else if (*c == 'B')
                CharCount += 2;
            c++;
        }
    }
    printf("\nHoles in the text: %d\n", CharCount);
}
