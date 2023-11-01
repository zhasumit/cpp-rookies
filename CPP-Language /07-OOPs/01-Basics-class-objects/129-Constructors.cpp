// constructors -> Automatic functions that assign the values to attributes
#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Non - parametrised constructors
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }

    // Parametrised constructors
    Rectangle(float l, float b)
    {
        setLength(l);
        setBreadth(b);
    }

    // Copy constructors
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
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

    Rectangle r; // calls non-parametrised constructor
    cout << "=====================================\n";
    cout << "Non - Parametrised [Rectangle r]\n";
    cout << "Length       : " << r.getLength() << endl;
    cout << "breadth      : " << r.getBreadth() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    cout << "Diagonal  : " << r.diagonal() << endl;
    cout << "=====================================\n";

    cout << "\n=====================================\n";
    float len, wid;
    cout << "Enter Length  (r1) : ";
    cin >> len;

    cout << "Enter Breadth (r1) : ";
    cin >> wid;
    Rectangle r1(len, wid); // calls parametrised constructor
    cout << "=====================================\n";

    cout << "\n=====================================\n";
    cout << "Parametrised [Rectangle r1(len, wid)]\n";
    cout << "Length       : " << r1.getLength() << endl;
    cout << "breadth      : " << r1.getBreadth() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r1.area() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;
    cout << "Diagonal  : " << r1.diagonal() << endl;
    cout << "=====================================\n";

    cout << "\n=====================================\n";
    cout << "Enter Length  (r2) : ";
    cin >> len;

    cout << "Enter Breadth (r2) : ";
    cin >> wid;
    Rectangle r2(len, wid);
    cout << "\n=====================================\n";

    Rectangle copy(r2); // calls copy constructor
    cout << "=====================================\n";
    cout << "Copy constructor [Rectangle copy(r2)]\n";
    cout << "Length       : " << r2.getLength() << endl;
    cout << "breadth      : " << r2.getBreadth() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r2.area() << endl;
    cout << "Perimeter : " << r2.perimeter() << endl;
    cout << "Diagonal  : " << r2.diagonal() << endl;
    cout << "=====================================\n";
    return 0;
}