#include <iostream>
using namespace std;
// Explicity initialising the values of arguments default 0
// This is done to reduce the function for the corrospondence to their parameter list
int sum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main()
{
    int a = 10, b = 20, c = 30, d = 40;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;

    cout << "a + b         : " << a + b << endl;
    cout << "a + b + c     : " << a + b + c << endl;
    cout << "a + b + c + d : " << a + b + c + d << endl;

    return 0;
}