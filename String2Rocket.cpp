#include <iostream>
using namespace std;
int main()
{
    char *str = "Developer inside";
    for (puts("  |\n /_\\"); *str; cout << " |" << *str++ << "|\n")
        ; // it prints string only on Rocket
    cout << " |_|\n/___\\\n VvV";
    return 0;
}