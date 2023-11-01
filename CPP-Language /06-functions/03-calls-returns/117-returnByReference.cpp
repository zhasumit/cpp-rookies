#include <iostream>
using namespace std;
int &func(int &a) // formal parameter is a reference to actual parameter
{
    cout << "a  : " << a << "\n";
    cout << "&a : " << &a << "\n";
    return a; // returns a which is refernce to a
}
int main()
{
    int x;
    cout << "Enter x : ";
    cin >> x;

    // func(x) acts as the refernce to the return value's address
    // since func(x) = x;
    // Any change in func(x) change x => func(x) acts as Lvlaue for x
    func(x) = 32;

    cout << "x  : " << x << "\n";
    cout << "&x : " << &x << "\n";

    return 0;
}