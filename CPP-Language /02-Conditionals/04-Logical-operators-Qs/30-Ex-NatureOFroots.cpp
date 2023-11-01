#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter a, b, c of the quadratic equation : \n";
    cout << "a : ";
    cin >> a;

    cout << "b : ";
    cin >> b;

    cout << "c : ";
    cin >> c;
    float D = (b * b) - (1 * a * c);

    if (D < 0)
        cout << "------IMAGINARY roots------\n";
    if (D >= 0)
    {
        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);
        cout << "------REAL roots------\n";
        if (D == 0)
            cout << "REAL and EQUAL roots : \nROOT 1 : "
                 << root1 << "\nROOT 2: " << root2 << "\n";
        if (D > 0)
            cout << "REAL and DISTINCT roots : \nROOT 1 : "
                 << root1 << "\nROOT 2 : " << root2 << "\n";
    }
    return 0;
}