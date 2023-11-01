#include <iostream>
using namespace std;

int main()
{
    float radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;

    float area = (3.1415f * radius * radius);
    float perimeter = (2 * 3.1415f * radius);

    cout << "AREA of circle         : " << area << " sq. units" << endl;
    cout << "CRCUMFERENCE of circle : " << perimeter << " units" << endl;
    return 0;
}