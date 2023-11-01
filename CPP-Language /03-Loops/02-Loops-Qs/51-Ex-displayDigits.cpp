#include <iostream>
using namespace std;

int main()
{
    int n, rem = 0;
    cout << "Enter the number : ";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n /= 10;
        cout << rem << " ";
    }
    return 0;
}