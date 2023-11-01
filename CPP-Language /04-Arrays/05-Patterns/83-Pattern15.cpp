/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        // for spaces
        for (int j = n - 1; j >= i; j--)
            cout << " ";

        // for row number as number of rows
        for (int j = 1; j <= i; j++)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}