/*
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
#include <iostream>
using namespace std;

int main()
{
    int n, temp = 1;
    cout << "Enter the height of table : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (temp >= 1 && temp <= 10)
                cout << temp << "   ";
            else if (temp > 10 && temp < 100)
                cout << temp << "  ";
            else
                cout << temp << " ";
            temp++;
        }
        cout << "\n";
    }
}