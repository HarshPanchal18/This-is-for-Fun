#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three nos.");
    scanf("%d%d%d",&a,&b,&c);

    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;
    printf("The swapped nos. are ",a,b,c);

    return 0;
}
