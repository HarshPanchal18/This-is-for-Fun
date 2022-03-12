#include <stdio.h>

/*
Bulb Switcher problem
There are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.
On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on).
For the ith round, you toggle every i bulb.
For the nth round, you only toggle the last bulb.
SpaceComplexity: O(1)

Return the number of bulbs that are on after n rounds.

*/

int bulbSwitch(int n)
{
    int bulb = 1, ans = 0;
    // A bulb is ON if it is toggled odd times
    while (bulb * bulb <= n)
    {
        ans++;
        bulb++;
    }
    return ans;
}

int main(void)
{
    int n;
    printf("Enter the no. of bulbs: \n");
    scanf("%d", &n);

    printf("%d \n", bulbSwitch(n));
}
