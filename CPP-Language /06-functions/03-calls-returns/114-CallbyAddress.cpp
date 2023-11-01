#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    // the addresses of actual parameters are passed to formal parameters
    int temp = *x;
    *x = *y;
    *y = temp;
    // the values present at the address of the formal parameters are changed
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
    swap(&a, &b);
    // call by address changes the value at address passsed to the function

    // the values of the actual parameter are swapped
    cout << "After swapping in main() : \n";
    cout << "a : " << a << "\n";
    cout << "b : " << b << "\n";
    return 0;
}