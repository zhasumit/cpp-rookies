#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the height of the table : ";
    cin >> n;
    // Base pattern of square MOST IMPORTANT
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << "* ";
        cout << "\n";
    }

    cout << "\nUsing x\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << "x ";
        cout << "\n";
    }
    return 0;
}