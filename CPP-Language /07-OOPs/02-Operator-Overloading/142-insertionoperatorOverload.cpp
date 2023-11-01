// Operator overloading is done to make things more symbolic and easily accessible
#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imaginary;

public:
    // Parametrised constructor with default arguments
    Complex();
    Complex(float real, float imaginary);

    // Accessors
    float getReal();
    float getImaginary();

    // facilitators
    friend ostream &operator<<(ostream &O, Complex &A);
};
int main()
{
    float real, img;
    cout << "---------COMPLEX A---------\n";
    cout << "Enter real part : ";
    cin >> real;
    cout << "Enter Img  part : ";
    cin >> img;
    Complex A(real, img);

    cout << "\n\n---------COMPLEX B---------\n";
    cout << "Enter real part : ";
    cin >> real;
    cout << "Enter Img  part : ";
    cin >> img;
    Complex B(real, img);

    cout << "A : " << A << "\nB : " << B;
    return 0;
}

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(float real, float imaginary)
{
    // Mutators
    this->real = real;
    this->imaginary = imaginary;
}

// Accessors
float Complex::getReal()
{
    return real;
}
float Complex::getImaginary()
{
    return imaginary;
}

// facilitators
ostream &operator<<(ostream &Out, Complex &A)
{
    Out << A.real << " + " << A.imaginary << "i";
    return Out; // returns outstream
}