// Write a class to demonstrate polymorphism
// Base class shape -> derived classes rectangle and circle

#include <iostream>
using namespace std;

class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    rectangle(float length = 1, float breadth = 1)
    {
        SetLength(length);
        SetBreadth(breadth);
    }

    // Mutators Setter
    void SetLength(float len);
    void SetBreadth(float Wid);

    // getter
    float GetLength();
    float GetBreadth();

    // facilitators
    float area();
    float perimeter();
};

class circle : public shape
{
private:
    float radius;

public:
    // constructor
    circle(float rad = 1) { SetRadius(rad); }

    // Mutators Setter
    void SetRadius(float rad);

    // getter
    float GetRadius();

    // facilitators
    float area();
    float perimeter();
};

int main()
{
    float len, wid, rad;
    cout << "Enter Length  : ";
    cin >> len;
    cout << "Enter Breadth : ";
    cin >> wid;
    shape *Sptr;
    Sptr = new rectangle(len, wid);
    cout << "\nShape class pointer : Sptr\n";
    cout << "Sptr -> new rectangle object\n";
    cout << "Sptr -> area()      : " << Sptr->area() << endl;
    cout << "Sptr -> Perimeter() : " << Sptr->perimeter() << endl;

    cout << "\nEnter radius  : ";
    cin >> rad;
    Sptr = new circle(rad);
    cout << "Sptr -> new Circle object\n";
    cout << "Sptr -> area()      : " << Sptr->area() << endl;
    cout << "Sptr -> Perimeter() : " << Sptr->perimeter() << endl;

    return 0;
}

// RECTANGLE
// constructor

// Mutators Setter
void rectangle::SetLength(float len)
{
    if (len > 0)
        this->length = len;
    else
        this->length = 1;
}
void rectangle::SetBreadth(float Wid)
{
    if (Wid > 0)
        this->breadth = Wid;
    else
        this->breadth = 1;
}

// getter
float rectangle::GetLength() { return this->length; }
float rectangle::GetBreadth() { return this->breadth; }

// facilitators
float rectangle::area() { return length * breadth; }
float rectangle::perimeter() { return (2 * (length + breadth)); }

// CIRCLE

// Mutators Setter
void circle::SetRadius(float rad)
{
    if (rad > 0)
        this->radius = rad;
    else
        this->radius = 1;
}

// getter
float circle::GetRadius() { return radius; }

// facilitators
float circle::area() { return (3.1415 * radius * radius); }
float circle::perimeter() { return (2 * 3.1415 * radius); }