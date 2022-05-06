#include <iostream>
#include <algorithm>

using namespace std;

int makeChange(int *coin, int n, int money)
{
    int ans = 0;
    while (money > 0)
    {
        int id = upper_bound(coin, coin + n, money) - 1 - coin;
        money -= coin[id];
        ans++;
    }

    return ans;
}

int main(void)
{
    int money;
    cin >> money;

    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int t = sizeof(coins) / sizeof(coins[0]);

    cout << "Coins Needed: " << makeChange(coins, t, money) << endl;
}

/*
176
Coins Needed: 5
*/
