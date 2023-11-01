#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    // Value of a
    cout << "a  : " << a << endl;

    // Address of a
    cout << "&a : " << &a << endl;

    // Value of p
    cout << "p  : " << p << endl;

    // Address of p
    cout << "&p : " << &p << endl;

    // Vlaue of the variable that p points at (a)
    cout << "*p : " << *p << endl;

    return 0;
}