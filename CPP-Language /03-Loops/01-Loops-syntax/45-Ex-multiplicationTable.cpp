#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number for its table : ";
    cin >> n;
    // multiplication table of that number (n)
    for (int i = 1; i <= 10; i++)
        cout << i << " x " << i << " = " << i * i << "\n";

    // multiplication table of all numbers upto (n)
    for (int p = 1; p <= n; p++)
    {
        for (int i = 1; i <= 10; i++)
            cout << p << " x " << i << " = " << p * i << "\n";
        cout << "\n";
    }
    return 0;
}