#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x1, x2, a, b, c;
    cout << "Enter values of a, b and c : ";
    float D = sqrt((b * b) - (4 * a * c));
    x1 = -b + D / (2 * a);
    x2 = -b + D / (2 * a);
    if (D < 0)
        cout << "Imaginary roots ";
    if (D > 0)
        cout << "TWO distinct REAL roots " << x1 << ",  " << x2;
    if (D == 0)
        cout << "ONE REAL root " << x1 << ",  " << x2;
}