#include <iostream>
using namespace std;

int main()
{
    int n, rem, rev = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }
    cout << rev << "\n";

    cout << "The digits of the number are : ";
    while (rev > 0)
    {
        rem = rev % 10;
        rev /= 10;
        cout << rem << " ";
    }
    return 0;
}