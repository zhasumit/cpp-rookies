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
        // inner loop -> space [j]
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // inner loop -> star [j]
        for (int k = 1; k <= i; k++)
        {
            cout << "x ";
        }
        cout << "\n";
    }
}