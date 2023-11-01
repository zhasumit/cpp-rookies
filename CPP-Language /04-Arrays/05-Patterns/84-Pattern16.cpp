/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of rows of the matrix : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        // for spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // for left elements
        for (int j = i; j >= 1; j--)
            cout << j << " ";

        // for right elements
        for (int j = 2; j <= i; j++)
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}