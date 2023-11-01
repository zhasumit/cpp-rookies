/*
x                 x
x x             x x
x x x         x x x
x x x x     x x x x
x x x x x x x x x x
x x x x x x x x x x
x x x x     x x x x
x x x         x x x
x x             x x
x                 x
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    // number of rows
    for (int i = 1; i <= n; i++)
    {
        // left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "x ";
        }
        // spaces
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << "  ";
        }
        // right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "x ";
        }
        cout << "\n";
    }
    for (int i = n; i >= 1; i--)
    {
        // left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "x ";
        }
        // spaces
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << "  ";
        }
        // right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "x ";
        }
        cout << "\n";
    }
}