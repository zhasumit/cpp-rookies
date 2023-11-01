#include <iostream>
using namespace std;

int main()
{
    int num, den;

    cout << "Enter the numerator : ";
    cin >> num;
    cout << "Enter the denomenator : ";
    cin >> den;

    if (den == 0)
        cout << "INVLAID denominator = 0\n";
    else
        cout << num << " / " << den << " = " << (num / den);
    return 0;
}