/*
x
x x
x x x
x x x x
x x x x x
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the height of the traingle : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "x ";
        cout << "\n";
    }
}