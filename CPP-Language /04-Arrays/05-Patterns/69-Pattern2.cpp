/*
    x  x  x  x  x  x
    x              x
    x              x
    x              x
    x              x
    x  x  x  x  x  x        hollow square
 */
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows of the matrix : ";
    cin >> row;
    cout << "Enter the number of coloums of the matrix : ";
    cin >> col;

    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            if (i == 0 || j == 0 || j == col || i == row)
                cout << " x ";
            else
                cout << "   ";
        }
        cout << "\n";
    }
    return 0;
}