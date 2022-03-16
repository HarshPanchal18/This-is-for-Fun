#include <stdio.h>
#include <iostream>

using namespace std;

void PrintMat(char matrix[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j];
        cout << "\n";
    }
}

void Fill(int i, int j, char dot, char color, char matrix[][100], int n, int m)
{
    if (matrix[i][j] != dot || i < 0 || j < 0 || i > n - 1 || j > m - 1)
        return;

    matrix[i][j] = color; // Color the [1][1] position on first iteration

    Fill(i + 1, j, dot, color, matrix, n, m); // print second column from matrix[i][j] to matrix[row][j]
    Fill(i - 1, j, dot, color, matrix, n, m); // print second column (matrix[][j])
    Fill(i, j + 1, dot, color, matrix, n, m); // after last iteration (Second Column), print remaining columns till the 'M'.
    Fill(i, j - 1, dot, color, matrix, n, m); // print first column
}
