/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1 (odd -> 1 even -> 0)
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the height of the triangle : ";
    cin >> n;
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << temp << " ";
            else
                cout << !temp << " ";
        }
        cout << "\n";
    }
}
