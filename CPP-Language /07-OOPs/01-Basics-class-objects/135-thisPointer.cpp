#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
private:
    float length, breadth;

public:
    // constructors
    rectangle(float length = 1, float breadth = 1)
    {
        setLength(length);
        setBreadth(breadth);
    }

    // getter methods
    float getLength()
    {
        return length;
    }

    float getBreadth()
    {
        return breadth;
    }

    // setter methods
    void setLength(float length)
    {
        if (length < 0)
        {
            cout << "Length can't be Zero or Negative\n";
            this->length = 1;
        }
        else
            this->length = length;
    }

    void setBreadth(float breadth)
    {
        if (breadth < 0)
        {
            cout << "Breadth can't be Zero or Negative\n";
            this->breadth = 1;
        }
        else
            this->breadth = breadth;
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
    cout << "Enter length : ";
    cin >> len;
    cout << "Enter width : ";
    cin >> wid;

    rectangle r1(len, wid); // calls parametrised constructor for l = len, b = wid
    cout << "\n\nParametrised [Rectangle r1(len, wid);] \n";
    cout << "Length       : " << r1.getLength() << endl;
    cout << "breadth      : " << r1.getBreadth() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r1.area() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;
    cout << "Diagonal  : " << r1.diagonal() << "\n\n";
    return 0;
}