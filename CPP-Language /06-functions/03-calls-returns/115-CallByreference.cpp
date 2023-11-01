#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    // Activation record of the function swap is not created and the machine code is pasted in main()
    // NO formal parameters are created since it is just a reference to the called actual parameter
    cout << "&x : " << &x << "\t&y : " << &y << "\n\n";
    int temp = x;
    x = y;
    y = temp;
    // the values in the variable are changed
    // the values of the actual parameters are swapped
}
int main()
{
    int a, b;
    cout << "Enter two variables : ";
    cin >> a >> b;

    cout << "Before swapping : \n";
    cout << "a : " << a << "\n";
    cout << "b : " << b << "\n\n";
    cout << "&a : " << &a << "\t&b : " << &b << "\n";

    swap(a, b);
    // call by reference changes the value at reference of the variable
    // It is simply an alias name to the same variable
    // the values of the actual parameter are swapped
    cout << "After swapping in main() : \n";
    cout << "a : " << a << "\n";
    cout << "b : " << b << "\n";
    return 0;
}