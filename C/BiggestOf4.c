#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    int f1, f2;
    printf("Enter 4 numbers :- \n");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 > n4)
        f1 = n1;
    else
        f1 = n4;
    if (n2 > n3)
        f2 = n2;
    else
        f2 = n3;

    if (f1 > f2)
        printf("%d is largest...\n", f1);
    else
        printf("%d is largest...\n", f2);
    return 0;
}
