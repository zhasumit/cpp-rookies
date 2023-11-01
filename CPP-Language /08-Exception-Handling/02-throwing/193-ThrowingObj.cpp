#include <iostream>
using namespace std;

class MyException
{
};
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
            throw MyException();
        int c;
        c = a / b;
        cout << a << " / " << b << " = " << c;
    }
    catch (MyException e)
    {
        cout << "Division by ZERO ";
    }
    cout << "\nBYE";
    return 0;
}