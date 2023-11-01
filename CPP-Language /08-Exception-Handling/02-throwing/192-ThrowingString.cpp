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
            throw string("Div by 0");
        int c;
        c = a / b;
        cout << a << " / " << b << " = " << c;
    }
    catch (string e)
    {
        cout << "Division by ZERO : Code : " << e;
    }
    cout << "\nBYE";
    return 0;
}