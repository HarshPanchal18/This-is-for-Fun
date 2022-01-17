/*
    175 = 1^1 + 7^2 + 5^3 = 1 + 49 + 125 = 175      <- Disarium number
*/

#include <stdio.h>
#include <math.h>

int digits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int IsDisarium(int n)
{
    int sum = 0, temp = n;
    int dCount = digits(n);

    while (temp != 0)
    {
        sum += (pow(temp % 10, dCount--));
        temp /= 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int main(void)
{
    int no, temp;
    int sum = 0, dig = 0, limit;
    //Check a number
    /*printf("\nEnter a number: ");
    scanf("%d", &no);
    if (IsDisarium(no) == 1)
        printf("\n%d is a Disarium Number", no);
    else
        printf("\n%d is not a Disarium Number", no);
*/

    // From 1 to N
    /*
    printf("\nEnter last number: ");
    scanf("%d", &limit);

    for (int i = 0; i <= limit; i++)
        if (IsDisarium(i) == 1)
            printf("%d\n", i);*/
}