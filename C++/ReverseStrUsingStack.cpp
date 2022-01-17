#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

void Reverse(char c[], int length)
{
    stack<char> s;
    for (int i = 0; i < length; i++)
        s.push(c[i]);

    for (int i = 0; i < length; i++)
    {
        c[i] = s.top();
        s.pop();
    }
}

int main(void)
{
    char c[51];
    printf("\nEnter a string: ");
    gets(c);
    Reverse(c, strlen(c));
    printf("\nReverse : %s", c);
}