// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

#include <stdio.h>
#define MAX 10
int main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);

    char flag[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
        flag[i] = 'a';

    for (int i = 2; i < n; i++)
    {
        if (flag[i] == 'a')
        {
            sum += i;

            int Factor = 2;

            while ((i * Factor) < n)
            {
                flag[i * Factor] = 'b';
                Factor++;
            }
        }
    }

    printf("The sum of the primes below %d is: ", n);
    printf("%lld", sum);

    return 0;
}
