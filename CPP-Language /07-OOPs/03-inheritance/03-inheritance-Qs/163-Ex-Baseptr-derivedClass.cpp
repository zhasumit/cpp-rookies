#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
private:
    float length;
    float breadth;

public:
    rectangle(float len = 0, float wid = 0);

    // Setter
    void setLength(float len);
    void setBreadth(float wid);

    // getter
    float getLength();
    float getBreadth();

    // facilitators
    float area();
    float perimeter();
    float diagonal();

    // Enquiry
    bool Issquare();
};

class cuboid : public rectangle
{
private:
    float height;

public:
    cuboid(float len, float wid, float tall);

    // Setter
    void setHeight(float tall);

    // getter
    float getHeight();

    // facilitators
    float Volume();
    float TSA();
    float LSA();
    float diagonal();

    // Enquiry
    bool IsCube();
};
int main()
{
    int l, b, h;
    cout << "------Rectangle------\n";
    cout << "Length  : ";
    cin >> l;
    cout << "Breadth : ";
    cin >> b;
    rectangle r(l, b);
    cout << "\n________Rectangle________\n";
    cout << "Length    : " << r.getLength() << endl;
    cout << "Breadth   : " << r.getBreadth() << endl;
    cout << "area      : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    cout << "Diagonal  : " << r.diagonal() << endl;
    cout << "IsSquare  : " << r.Issquare() << endl;

    cout << "\n------Cuboid------\n";
    cout << "Height  : ";
    cin >> h;

    cuboid C(l, b, h);
    cout << "\n\n________Cuboid________\n";
    cout << "Length    : " << C.getLength() << endl;
    cout << "Breadth   : " << C.getBreadth() << endl;
    cout << "Height    : " << C.getHeight() << endl;
    cout << "area      : " << C.area() << endl;
    cout << "Perimeter : " << C.perimeter() << endl;
    cout << "Volume    : " << C.Volume() << endl;
    cout << "TSA       : " << C.TSA() << endl;
    cout << "LSA       : " << C.LSA() << endl;
    cout << "Diagonal  : " << C.diagonal() << endl;
    cout << "IsSquare  : " << C.Issquare() << endl;
    cout << "IsCube    : " << C.IsCube() << endl;

    // A pointer of base class can only point to the functions in base class
    rectangle *Ptr = &C;
    cout << "\n________Rectangle Using Ptr->________\n";
    cout << "Length    : " << Ptr->getLength() << endl;
    cout << "Breadth   : " << Ptr->getBreadth() << endl;
    cout << "area      : " << Ptr->area() << endl;
    cout << "Perimeter : " << Ptr->perimeter() << endl;
    cout << "Diagonal  : " << Ptr->diagonal() << endl;
    cout << "IsSquare  : " << Ptr->Issquare() << endl;
    return 0;
}
// RECtANGLE functions
rectangle::rectangle(float len, float wid)
{
    setLength(len);
    setBreadth(wid);
}

// Setter
void rectangle::setLength(float len)
{
    if (len > 0)
        this->length = len;
    else
        this->length = 1;
}
void rectangle::setBreadth(float wid)
{
    if (wid > 0)
        this->breadth = wid;
    else
        this->breadth = 1;
}

// getter
float rectangle::getLength() { return length; }
float rectangle::getBreadth() { return breadth; }

// facilitators
float rectangle::area() { return length * breadth; }
float rectangle::perimeter() { return (2 * (length + breadth)); }
float rectangle::diagonal() { return (sqrt((length * length) + (breadth * breadth))); }

// Enquiry
bool rectangle::Issquare()
{
    if (length == breadth)
        return true;
    else
        return false;
}

// CUBOID FUNCTIOnS
cuboid::cuboid(float len, float wid, float tall)
{
    setLength(len);
    setBreadth(wid);
    setHeight(tall);
}

// Setter
void cuboid::setHeight(float tall)
{
    if (tall > 0)
        this->height = tall;
    else
        this->height = 1;
}

// getter
float cuboid::getHeight() { return height; }

// facilitators
float cuboid::Volume() { return getLength() * getBreadth() * height; }
float cuboid::TSA()
{
    int len = getLength(), wid = getBreadth();
    return (2 * ((len * wid) + (wid * height) + (height * len)));
}

float cuboid::LSA() { return (2 * height * (getLength() + getBreadth())); }
float cuboid::diagonal()
{
    int l = getLength(), b = getBreadth();
    return (sqrt((l * l) + (b * b) + (height * height)));
}

// Enquiry
bool cuboid::IsCube()
{
    if ((getLength() == getBreadth()) && (getLength() == height))
        return true;
    else
        return false;
}