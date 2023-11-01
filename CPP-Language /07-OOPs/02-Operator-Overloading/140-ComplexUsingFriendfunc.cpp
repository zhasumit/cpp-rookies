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
    friend Complex operator-(Complex A, Complex B);
    friend Complex operator*(Complex A, Complex B);
    friend Complex operator/(Complex A, Complex B);
    friend void SHOW(Complex A, Complex B, Complex C, string sign);
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
Complex operator+(Complex A, Complex B)
{
    Complex temp;
    temp.real = A.real + B.real;
    temp.imaginary = A.imaginary + B.imaginary;
    SHOW(A, B, temp, "+");
    return temp;
}

Complex operator-(Complex A, Complex B)
{
    Complex temp;
    temp.real = A.real + B.real;
    temp.imaginary = A.imaginary + B.imaginary;
    SHOW(A, B, temp, "-");
    return temp;
}

Complex operator*(Complex A, Complex B)
{
    Complex temp;
    temp.real = ((A.real * B.real) - (A.imaginary * B.imaginary));
    temp.imaginary = ((A.real * B.imaginary) + (A.imaginary * B.real));
    SHOW(A, B, temp, "x");
    return temp;
}

Complex operator/(Complex A, Complex B)
{
    Complex temp;
    float den = ((B.real * B.real) + (B.imaginary * B.imaginary));
    temp.real = (((A.real * B.real) + (A.imaginary * B.imaginary)) / den);
    temp.imaginary = (((A.imaginary * B.real) + (A.real * B.imaginary)) / den);
    SHOW(A, B, temp, "/");
    return temp;
}

void SHOW(Complex A, Complex B, Complex C, string sign)
{
    cout << "\n(" << A.real << " + " << A.imaginary << "i)  " << sign << " ";
    cout << "(" << B.real << " + " << B.imaginary << "i)  =  ";
    cout << "(" << C.real << " + " << C.imaginary << "i)";
}