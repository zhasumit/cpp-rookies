#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the vlaue of a : ";
    cin >> a;
    cout << "Enter the vlaue of b : ";
    cin >> b;
    try
    {
        if (b == 0)
            throw 'o';
        int c;
        c = a / b;
        cout << a << " / " << b << " = " << c;
    }
    catch (char e)
    {
        cout << "Division by ZERO : Code : " << e;
    }
    cout << "\nBYE";
    return 0;
}