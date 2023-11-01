#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
    int diagonal()
    {
        return sqrt((length * length) + (breadth * breadth));
    }
};

int main()
{
    rectangle r1; // object of class rectangle
    rectangle *p; // pointer of type rectangle(userdefined data-type)

    p = &r1;         // pointer p now points to the address of object r1
    p->length = 15;  // pointer p accessing length attribute p->length
    p->breadth = 10; // pointer p accessing breadth attrubute p->breadth

    cout << "p->length       : " << p->length << endl;
    cout << "p->breadth      : " << p->breadth << "\n\n";
    cout << "p->diagonal ()  : " << p->diagonal() << endl;
    cout << "p->area()       : " << p->area() << endl;
    cout << "p->perimeter()  : " << p->perimeter() << endl;

    return 0;
}