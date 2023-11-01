#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0;
    cout << "Enter the number : ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        sum += r;
    }

    cout << "Sum of the digits of the number = " << sum;
    return 0;
}