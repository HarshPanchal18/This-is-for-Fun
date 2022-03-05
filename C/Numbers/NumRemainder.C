/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<stdio.h>

long long int ans = 1;
int arr[20];

void update(int index, int num)
{
    /*
    To update the array.
    All the number from 1 to 20 are checked for division.
    If it is divisible then it is divided.
    */

    while(arr[num] % index==0)
    {
        ans *= num;
        for(int j = index;j < 20; j++)
            if(arr[j] % num == 0)
                arr[j] /= num;
    }
}

int main(void){
    int primes[]={ 2, 3, 5, 7, 11, 13, 17, 19};
    int nOfPrimes = sizeof(primes) / sizeof(primes[0]);

    for (int i = 1; i <= 20; i++)
        arr[i - 1] = i;

    for (int i = 1; i < 20; i++)
        for (int j = 0; j < nOfPrimes; j++)
            update(i, primes[j]);

    printf("%lld", ans);
}

/*
=>232792560
*/
