// get and set functions
// get functions -> accessors of data
// set functions -> mutators of data
#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{
    // attributes of the class are made private so they could not be accessed directly w/o validation
private:
    float length, breadth;

public:
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
    float len, wid;
    cout << "Enter Length  : ";
    cin >> len;

    cout << "Enter Breadth : ";
    cin >> wid;

    string unit;
    cout << "Enter unit    : ";
    cin >> unit;

    Rectangle r1;
    cout << "-------------------------------------\n";
    r1.setLength(len);
    cout << "Length entered : " << r1.getLength() << " " << unit << endl;
    r1.setBreadth(wid);
    cout << "width  entered : " << r1.getBreadth() << " " << unit << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r1.area() << " sq." << unit << endl;
    cout << "Perimeter : " << r1.perimeter() << " " << unit << endl;
    cout << "Diagonal  : " << r1.diagonal() << " " << unit << endl;
    cout << "-------------------------------------\n";
    return 0;
}