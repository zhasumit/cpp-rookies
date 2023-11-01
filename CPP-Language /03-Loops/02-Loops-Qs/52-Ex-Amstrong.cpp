// Armstrong number : a number that is equal to the sum of the cubes of its own digits.
// 370 => 370 = 3 * 3 * 3 + 7 * 7 * 7 + 0 * 0 * 0. => 370 is a Armstrong number

#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0;
    cout << "Armstrong OR not ? \n";
    cout << "Enter the number : ";
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        sum += (r * r * r);
    }

    if (sum == temp)
        cout << "ARMSTRONG number";
    else
        cout << "NOT Armstrong number";
    return 0;
}