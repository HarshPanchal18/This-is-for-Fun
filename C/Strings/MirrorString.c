#include <stdio.h>
#include <string.h> // we include the library string.h to the use of string

void putStr(char *cptr); // Prototypes of the three functions used in the program
int compute(char *s);
char *mirror(char *s);

int main(int argc, char *argv[])
{
    char string[20], s2[20];
    putStr(string);
    printf("Mirrored string \" %s \"", mirror(string));
    strcpy(s2, string);
    printf("\nFinal String: \" %s \"\n", strcat(string, s2));
}
// this function is used to put a string
void putStr(char *cptr)
{
    printf("Enter the string\n");
    scanf("%s", cptr);
}
/* the function mirror (in french ) it means "mirror" , the major idea is to
permute the first caractere with the last using an auxilary variable (aux) the
the 2nd character with the penultimate one and so on . we made a call to the
function (compute) which counts the length of the string . As you can see clearly
, I substruct 1 from the equation k = compute(s)-1 ; to get rid of the EOF
caractere which is '\0' because it is not a caractere from the string typed */
char *mirror(char *s)
{
    int i;
    char aux;
    int k;
    k = compute(s) - 1;
    i = 0;
    while (i <= k)
    {
        aux = s[i];
        s[i] = s[k];
        s[k] = aux;
        k--;
        i++;
    }

    return s;
}

// compute plays the role of strlen so we can change it by an strlen function if
// you want that
int compute(char *s)
{
    char *p;
    int k;
    p = s;
    k = 0;
    while (*p != '\0')
    {
        p++;
        k++;
    }
    return k;
}
