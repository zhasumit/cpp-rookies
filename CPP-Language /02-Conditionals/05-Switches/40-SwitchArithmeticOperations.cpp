#include <iostream>
using namespace std;

int main()
{
    int operation, a, b;
    cout << "Enter the operation on a & b : \n";
    cout << "1: Sum\n2: Difference\n3: Product\n4: Division\n5: Modulo\nCHOICE : ";
    cin >> operation;
    cout << "Enter the values of a and b : ";
    cin >> a >> b;
    switch (operation)
    {
    case 1:
        cout << a << " + " << b << " = " << (a + b) << "\n";
        break;

    case 2:
        cout << a << " - " << b << " = " << (a - b) << "\n";
        break;

    case 3:
        cout << a << " * " << b << " = " << (a * b) << "\n";
        break;

    case 4:
        cout << a << " / " << b << " = " << (a / b) << "\n";
        break;

    case 5:
        cout << a << " % " << b << " = " << (a % b) << "\n";
        break;

    default:
        cout << "Invalid operation";
    }
    return 0;
}