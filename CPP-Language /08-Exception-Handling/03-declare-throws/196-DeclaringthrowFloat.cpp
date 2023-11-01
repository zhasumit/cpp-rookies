#include <iostream>
using namespace std;

float division(float x, float y) throw(float)
{
    if (y == 0)
        throw 1.25f;
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
    catch (float e)
    {
        cout << "Division by ZERO : Code : " << e;
    }
    cout << "\nBYE";
    return 0;
}