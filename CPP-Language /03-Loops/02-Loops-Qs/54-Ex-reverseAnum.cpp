#include <iostream>
using namespace std;

int main()
{
    int n, rem, rev = 0;
    cout << "Enter the number : ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }
    cout << rev;
    return 0;
}