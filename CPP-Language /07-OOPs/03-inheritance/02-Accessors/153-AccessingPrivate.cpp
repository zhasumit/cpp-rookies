#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
private:
    float length;
    float breadth;

public:
    // Mutators
    void setLength(float length);
    void setBreadth(float breadth);
    // Accessors
    float getLength();
    float getBreadth();
    // Facilitators
    float area();
    float perimeter();
    float diagonal();
};

int main()
{
    rectangle r;
    // r.length = 10; // length is declared in PRIVATE and not accessible
    // r.breadth = 10; // breadth is declared in PRIVATE and not accessible

    // so the mutators are in the same class to access the private members
    // with mutators -> only writable
    // with accessors -> only readable
    // with accessors and mutators -> readable and writable

    // accessors -> getter functions
    // mutators -> setter functions

    float len, wid;
    cout << "Length  : ";
    cin >> len;
    cout << "Breadth : ";
    cin >> wid;

    r.setLength(len);
    r.setBreadth(wid);

    cout << "GetLength()  :" << r.getLength() << endl;
    cout << "GetBreadth() :" << r.getBreadth() << endl;
    cout << "area()       :" << r.area() << endl;
    cout << "perimeter()  :" << r.perimeter() << endl;
    cout << "diagonal()   :" << r.diagonal() << endl;
    return 0;
}

// Mutators
void rectangle::setLength(float length)
{
    if (length > 0)
        this->length = length;
    else
        this->length = 0;
}
void rectangle::setBreadth(float breadth)
{
    if (breadth > 0)
        this->breadth = breadth;
    else
        this->breadth = 0;
}
// Accessors
float rectangle::getLength() { return length; }
float rectangle::getBreadth() { return breadth; }

// Facilitators
float rectangle::area() { return length * breadth; }
float rectangle::perimeter() { return (2 * (length + breadth)); }
float rectangle::diagonal() { return (sqrt((length * length) + (breadth * breadth))); }