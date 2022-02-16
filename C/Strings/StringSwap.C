#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <conio.h>

int main(void)
{
    char s1[10], s2[10];
    printf("\nEnter string 1: ");
    scanf("%s", s1);
    printf("\nEnter string 2:");
    scanf("%s", s2);

    char *tmp;
    tmp = (char *)malloc(20);
    
    strcpy(tmp, s1);
    strcpy(s1, s2);
    strcpy(s2, tmp);

    printf("\nString 1: %s", s1);
    printf("\nString 2: %s", s2);
}
