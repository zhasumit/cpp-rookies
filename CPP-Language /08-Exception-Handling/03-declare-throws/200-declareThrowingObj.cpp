#include <iostream>
using namespace std;

class MyException
{
};
float division(int x, int y) throw(MyException)
{
    if (y == 0)
        throw MyException();
    return x / y;
}
int main()
{
    int a, b;
    cout << "Enter the vlaue of a : ";
    cin >> a;
    cout << "Enter the vlaue of b : ";
    cin >> b;
    try
    {
        int c = division(a, b);
        cout << a << " / " << b << " = " << c;
    }
    catch (MyException e)
    {
        cout << "Division by ZERO ";
    }
    cout << "\nBYE";
    return 0;
}