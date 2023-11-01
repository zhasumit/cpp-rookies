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
    Complex operator+(Complex comp);
    Complex operator-(Complex comp);
    Complex operator*(Complex comp);
    Complex operator/(Complex comp);
    void SHOW(Complex B, Complex C, string sign);
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
    C = A - B;
    C = A * B;
    C = A / B;

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
Complex Complex::operator+(Complex comp)
{
    Complex temp;
    temp.real = real + comp.real;
    temp.imaginary = imaginary + comp.imaginary;
    SHOW(comp, temp, "+");
    return temp;
}

Complex Complex::operator-(Complex comp)
{
    Complex temp;
    temp.real = real - comp.real;
    temp.imaginary = imaginary - comp.imaginary;
    SHOW(comp, temp, "-");
    return temp;
}

Complex Complex::operator*(Complex comp)
{
    Complex temp;
    temp.real = ((real * comp.real) - (imaginary * comp.imaginary));
    temp.imaginary = ((real * comp.imaginary) + (imaginary * comp.real));
    SHOW(comp, temp, "x");
    return temp;
}

Complex Complex::operator/(Complex comp)
{
    Complex temp;
    // x = real
    // y = imaginary
    // u = comp.real
    // v = comp.imaginary
    float den = ((comp.real * comp.real) + (comp.imaginary * comp.imaginary));
    temp.real = (((real * comp.real) + (imaginary * comp.imaginary)) / den);
    temp.imaginary = (((imaginary * comp.real) + (real * comp.imaginary)) / den);
    SHOW(comp, temp, "/");
    return temp;
}

void Complex::SHOW(Complex B, Complex C, string sign)
{
    cout << "\n(" << real << " + " << imaginary << "i)  " << sign << " ";
    cout << "(" << B.real << " + " << B.imaginary << "i)  =  ";
    cout << "(" << C.real << " + " << C.imaginary << "i)";
}