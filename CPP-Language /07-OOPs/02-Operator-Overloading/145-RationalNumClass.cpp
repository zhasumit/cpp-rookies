// Write a class for rational numbers(p/q) with overloading + an insertion operator (<<)
#include <iostream>
using namespace std;
class rationalNum
{
private:
    int p;
    int q;

public:
    // constructors
    rationalNum()
    {
        p = 1;
        q = 1;
    }

    rationalNum(int p, int q)
    {
        this->p = p;
        this->q = q;
    }

    rationalNum(rationalNum &A)
    {
        this->p = A.p;
        this->q = A.q;
    }

    // Accessors
    int getP() { return p; }
    int getQ() { return q; }

    // Mutators
    void setP(int p) { this->p = p; }
    void setQ(int q) { this->q = q; }

    // Facilitators
    rationalNum operator+(rationalNum B);

    // Output stream
    friend ostream &operator<<(ostream &Out, rationalNum &A);

    // // Destructors
    // ~rationalNum();
};

int main()
{
    int p, q;
    cout << "---------Number A---------\n";
    cout << "Enter numerator   : ";
    cin >> p;
    cout << "Enter denominator : ";
    cin >> q;
    rationalNum A(p, q);

    cout << "---------Number B---------\n";
    cout << "Enter numerator   : ";
    cin >> p;
    cout << "Enter denominator : ";
    cin >> q;
    rationalNum B(p, q);

    rationalNum C;
    C = A + B;
    cout << C;
    // cout << A + B;
}

rationalNum rationalNum::operator+(rationalNum B)
{
    rationalNum temp;
    temp.p = this->p * B.q + this->q * B.p;
    temp.q = this->q * B.q;
    return temp;
}

ostream &operator<<(ostream &Out, rationalNum &A)
{
    Out << A.p << " / " << A.q;
    return Out; // returns outstream
}