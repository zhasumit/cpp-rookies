// scope resolution operator lets user to seperate the definition outside of th function
// Inline functions cant be made complex
// But using the scope resolution opeator the function is elaborated at function call
#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Constructors
    Rectangle();

    Rectangle(float l, float b);

    Rectangle(Rectangle &rect);

    // Mutators
    void setLength(float l);

    void setBreadth(float b);

    // Accessors
    float getLength();

    float getBreadth();

    // Facilitators
    float area();

    float perimeter();

    float diagonal();

    // Investigators
    bool issqaure();

    // destructors
    ~Rectangle();
};

int main()
{
    // the functions defined outside is called at function call

    cout << "\n";
    float len, wid;
    cout << "Enter Length  : ";
    cin >> len;

    cout << "Enter Breadth : ";
    cin >> wid;
    cout << "\n";

    Rectangle r; // calls parametrised constructor for l = 1, b = 1
    cout << "\n\nNON - Parametrised [Rectangle r;]\n";
    cout << "Length       : " << r.getLength() << endl;
    cout << "breadth      : " << r.getBreadth() << endl;
    cout << "r.issqaure() : " << r.issqaure() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    cout << "Diagonal  : " << r.diagonal() << "\n\n";

    Rectangle r1(len, wid); // calls parametrised constructor for l = len, b = wid
    cout << "\n\nParametrised [Rectangle r1(len, wid);] \n";
    cout << "Length       : " << r1.getLength() << endl;
    cout << "breadth      : " << r1.getBreadth() << endl;
    cout << "r2.issqaure(): " << r1.issqaure() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r1.area() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;
    cout << "Diagonal  : " << r1.diagonal() << "\n\n";

    Rectangle copy(r1); // calls copy constructor
    cout << "\nCopy constructor [Rectangle copy(r1);]\n";
    cout << "Length         : " << copy.getLength() << endl;
    cout << "breadth        : " << copy.getBreadth() << endl;
    cout << "copy.issqaure(): " << copy.issqaure() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << copy.area() << endl;
    cout << "Perimeter : " << copy.perimeter() << endl;
    cout << "Diagonal  : " << copy.diagonal() << "\n\n";
    return 0;
}

// Constructors
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(float l, float b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}

// Mutators
void Rectangle::setLength(float l)
{
    if (l > 0)
        length = l;
    else
    {
        length = 1;
        cout << "Length Cant be negative \n";
    }
}

void Rectangle::setBreadth(float b)
{
    if (b > 0)
        breadth = b;
    else
    {
        breadth = 1;
        cout << "Breadth Cant be negative \n";
    }
}

// Accessors
float Rectangle::getLength()
{
    return length;
}

float Rectangle::getBreadth()
{
    return breadth;
}

// Facilitators
float Rectangle::area()
{
    return length * breadth;
}

float Rectangle::perimeter()
{
    return (2 * (length + breadth));
}

float Rectangle::diagonal()
{
    return (sqrt((length * length) + (breadth * breadth)));
}

// Investigators
bool Rectangle::issqaure()
{
    if (length == breadth)
    {
        cout << "SQUARE\n";
        return true;
    }
    else
        return false;
}

// destructors
Rectangle::~Rectangle()
{
    cout << "\nDestructor invoked : Object destroyed\n";
}