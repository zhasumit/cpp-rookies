#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows and col of the matrix : ";
    cin >> row >> col;
    int A[row][col];

    cout << "Enter the matrix : \n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> A[i][j];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << A[i][j] << " ";
        cout << "\n";
    }

    // Using foreach loop
    for (auto &x : A) // X takes the rows automatically
    {
        for (auto &y : x) // Y takes the colums using for each X
            cout << y << "\n";
    }
    return 0;
}