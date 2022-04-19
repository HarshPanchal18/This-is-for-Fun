#include <iostream>

using namespace std;

int main(void)
{
    while (1)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (!a && !b && !c)
            break;

        if ((b * b) + (c * c) == a * a || (c * c) + (a * a) == b * b || (a * a) + (b * b) == c * c)
            cout << "Right\n";
        else
            cout << "Wrong\n";
    }
}
