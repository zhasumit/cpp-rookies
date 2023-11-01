#include <iostream>
using namespace std;

float division(float x, float y) throw(int)
{
    if (y == 0)
        throw 101;
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
        int c;
        c = division(a, b);
        cout << a << " / " << b << " = " << c;
    }
    catch (int e)
    {
        cout << "Division by ZERO : Code : " << e;
    }
    cout << "\nBYE";
    return 0;
}