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
    friend void operator<<(ostream &O, Complex &A);
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

    cout << "A : " << A;
    cout << "\nB : " << B;
    // Reference to overloaded function cannot be resolved
    // unable to call a function -> after one object refernce call it cant show any furthur
    // SO, these function calls only call upto one object call
    // But using ostream you can pass anything after the object pass
    // cout << "A : " << A << endl;
    // cout << "B : " << B << endl;
    // cout << "A : " << A << "B : " << B << endl;

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
void operator<<(ostream &Out, Complex &A)
{
    Out << A.real << " + " << A.imaginary << "i";
    // return Out; // returns outstream
}