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
    rectangle *p; // pointer of type rectangle (userdefined data-type)

    p = new rectangle; // dynamically allocating the memory in heap using new keyword

    p->length = 15;  // pointer p accessing length attribute p->length
    p->breadth = 10; // pointer p accessing breadth attrubute p->breadth

    cout << "p->length       : " << p->length << endl;
    cout << "p->breadth      : " << p->breadth << "\n\n";
    cout << "p->diagonal ()  : " << p->diagonal() << endl;
    cout << "p->area()       : " << p->area() << endl;
    cout << "p->perimeter()  : " << p->perimeter() << endl;

    delete p;    // delete the memory created in heap
    p = nullptr; // making the pointer point to NULL

    rectangle *ptr = new rectangle;
    ptr->length = 55;
    ptr->breadth = 7;

    cout << "p->length       : " << ptr->length << endl;
    cout << "p->breadth      : " << ptr->breadth << "\n\n";
    cout << "p->diagonal ()  : " << ptr->diagonal() << endl;
    cout << "p->area()       : " << ptr->area() << endl;
    cout << "p->perimeter()  : " << ptr->perimeter() << endl;

    delete ptr;
    ptr = nullptr;
    return 0;
}