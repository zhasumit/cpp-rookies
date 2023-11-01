#include <iostream>
using namespace std;

int main()
{
    int n, rem, rev = 0;
    cout << "Enter the number to see if it is palindrome : ";
    cin >> n;

    int temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    if (n == rev)
        cout << "PALINDROME";
    else
        cout << "NOT Palindrome";
    return 0;
}