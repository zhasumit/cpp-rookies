#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
public:
    float length;
    float breadth;
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return (2 * (length + breadth));
    }
    float diagonal()
    {
        return sqrt((length * length) + (breadth * breadth));
    }
};
int main()
{
    rectangle r1, r2, r3;
    cout << "---Enter the values of length and breadth---\n";

    cout << "Rectangle 1\n";
    cout << "Length : ";
    cin >> r1.length;
    cout << "Breadth : ";
    cin >> r1.breadth;

    cout << "Area      : " << r1.area() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;
    cout << "Diagonal  : " << r1.diagonal() << endl;

    cout << "\nRectangle 2\n";
    cout << "Length : ";
    cin >> r2.length;
    cout << "Breadth : ";
    cin >> r2.breadth;

    cout << "Area      : " << r2.area() << endl;
    cout << "Perimeter : " << r2.perimeter() << endl;
    cout << "Diagonal  : " << r2.diagonal() << endl;

    cout << "\nRectangle 3\n";
    cout << "Length : ";
    cin >> r3.length;
    cout << "Breadth : ";
    cin >> r3.breadth;

    cout << "Area      : " << r3.area() << endl;
    cout << "Perimeter : " << r3.perimeter() << endl;
    cout << "Diagonal  : " << r3.diagonal() << endl;
    return 0;
}