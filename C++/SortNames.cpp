#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void Sort(char q[][20], int n)
{
    int i, j, p;
    char t[20], l[20];
    for (i = 0; i < n - 1; i++)
    {
        strcpy(l, q[i]), p = i;
        for (j = i + 1; j < n; j++)
            if (strcmpi(l, q[j]) > 0) // put  <  for descending order
                strcpy(l, q[j]), p = j;
        
        strcpy(t, q[i]);
        strcpy(q[i], q[p]);
        strcpy(q[p], t);
    }
}

int main(void)
{
    cout << "\n\n_______________________________________________________________________\n";
    cout << "     Arranging Array of Names in Descending order using selection sort\n";
    cout << "_________________________________________________________________________";
 
    int n;
    cout << "\n\n\n\n\n Enter the size of array =\t";
    cin >> n;
    
    char a[n][20];
    cout << "\n Enter all the values of the array:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    Sort(a, n);
    
    cout << "\n Sorted Array :-\n";
    for (int i = 0; i < n; i++)
        cout << endl
             << "\t\t" << a[i];
}
