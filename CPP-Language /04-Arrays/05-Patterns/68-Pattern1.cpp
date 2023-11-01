/*
0|  x  x  x  x  x
1|  x  x  x  x  x
2|  x  x  x  x  x
3|  x  x  x  x  x
4|  x  x  x  x  x
 */
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the rows : ";
    cin >> row;
    cout << "Enter the Coloums : ";
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        cout << i << "| ";
        for (int j = 0; j < col; j++)
        {
            cout << " x ";
        }
        cout << "\n";
    }
    return 0;
}