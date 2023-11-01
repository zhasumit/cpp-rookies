// constructors -> Automatic functions that assign the values to attributes
#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Since the parameter have default arguments = 0
    // Hence, they act as both Parametrised and Non-Parametrised constructors
    Rectangle(float l = 1, float b = 1)
    {
        setLength(l);
        setBreadth(b);
    }

    // getter methods are used to access the values stored at a particular location
    float getLength()
    {
        return length;
    }

    float getBreadth()
    {
        return breadth;
    }

    // setter methods are used to set the values of the attributs in the private part with validation
    void setLength(float l)
    {
        if (l < 0)
        {
            cout << "Length can't be Zero or Negative\n";
            length = 1;
        }
        else
            length = l;
    }

    void setBreadth(float b)
    {
        if (b < 0)
        {
            cout << "Breadth can't be Zero or Negative\n";
            breadth = 1;
        }
        breadth = b;
    }

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
    cout << "=====================================\n";
    float len, wid;
    cout << "Enter Length  : ";
    cin >> len;

    cout << "Enter Breadth : ";
    cin >> wid;
    cout << "=====================================\n";

    Rectangle r; // calls parametrised constructor for l = 1, b = 1
    cout << "\n=====================================\n";
    cout << "Parametrised with DEFAULT args \nr(1, 1) : l = 1, b = 1\n";
    cout << "Length       : " << r.getLength() << endl;
    cout << "breadth      : " << r.getBreadth() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    cout << "Diagonal  : " << r.diagonal() << endl;
    cout << "=====================================\n";

    Rectangle r1(len); // calls parametrised constructor for l = len, b = 1
    cout << "\n=====================================\n";
    cout << "Parametrised with DEFAULT args \nr1(len, 1) : l = len, b = 1\n";
    cout << "Length       : " << r1.getLength() << endl;
    cout << "breadth      : " << r1.getBreadth() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r1.area() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;
    cout << "Diagonal  : " << r1.diagonal() << endl;
    cout << "=====================================\n";

    Rectangle r2(len, wid); // calls parametrised constructor for l = len, b = wid
    cout << "\n=====================================\n";
    cout << "Parametrised with DEFAULT args \nr2(len, wid) : l = len, b = wid\n";
    cout << "Length       : " << r2.getLength() << endl;
    cout << "breadth      : " << r2.getBreadth() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r2.area() << endl;
    cout << "Perimeter : " << r2.perimeter() << endl;
    cout << "Diagonal  : " << r2.diagonal() << endl;
    cout << "=====================================\n";
    return 0;
}