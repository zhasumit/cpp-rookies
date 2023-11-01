// Friend function is yet another method to overload a function
// Friend doesnt belong to any class but it takes parameters their private and protected parts
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
    friend Complex operator+(Complex A, Complex B);
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

    Complex C = A + B;
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
Complex operator+(Complex A, Complex B)
{
    Complex C;
    C.real = A.real + B.real;
    C.imaginary = A.imaginary + B.imaginary;
    cout << "\n(" << A.real << " + " << A.imaginary << "i) + ";
    cout << "(" << B.real << " + " << B.imaginary << "i)  =  ";
    cout << "(" << C.real << " + " << C.imaginary << "i)";
    return C;
}
