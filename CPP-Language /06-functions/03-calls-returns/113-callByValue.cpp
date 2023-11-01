#include <iostream>
using namespace std;
void swap(int x, int y)
{
    // the values of the actual parameters are copied into the formal parameters
    int temp = x;
    x = y;
    y = temp;
    cout << "In function : \n";
    cout << "a : " << x << "\n";
    cout << "b : " << y << "\n";
    // the values of the formal parameters are swapped
}
int main()
{
    int a, b;
    cout << "Enter two variables : ";
    cin >> a >> b;

    cout << "Before swapping : \n";
    cout << "a : " << a << "\n";
    cout << "b : " << b << "\n";
    swap(a, b);
    // call by value is only suitable for returning types of functions

    // the values of the actual parameter are not swapped
    cout << "After swapping in main() : \n";
    cout << "a : " << a << "\n";
    cout << "b : " << b << "\n";
    return 0;
}