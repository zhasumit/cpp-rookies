// Stream operator overloading
// Input stream cin>>(extraction) operator can be overloaded upon a class
// output stream cout <<(insertion) operator can be overloaded upon a class

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
};
ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img << endl;
    return out;
}
int main()
{
    Complex c(10, 5);
    cout << c << endl;

    operator<<(cout, c);
    // After first call the ostream considers (cout << c) as cout
    // operator<<(cout, c);
    // cout << c << endl;

    // Ostream can also be replaced with void
}