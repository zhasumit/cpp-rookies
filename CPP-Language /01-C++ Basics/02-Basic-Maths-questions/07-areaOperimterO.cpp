#include <iostream>
using namespace std;

int main()
{
    float r, area, circumference;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    area = 3.1415f * r * r;
    circumference = 2 * 3.1415f * r;
    cout << "Area of O : " << area << endl;
    cout << "Circumference of O : " << circumference << endl;
    return 0;
}