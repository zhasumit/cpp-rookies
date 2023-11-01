#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    if (a > 0)
        cout << a << " ,value is POSITIVE\n";
    else if (a < 0)
        std ::cout << a << " ,value is NEGATIVE\n";
    else
        cout << a << " ,value is ZERO\n";

    return 0;
}