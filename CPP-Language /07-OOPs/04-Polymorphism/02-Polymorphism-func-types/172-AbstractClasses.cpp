#include <iostream>
using namespace std;

class base // Interface classes
{
public:
    virtual void fun1() = 0;
    virtual void fun2() = 0;
    virtual void fun3() = 0;
};
class inherited : public base
{
public:
    void fun1() { cout << "Child : Fun1\n"; }
    void fun2() { cout << "Child : Fun2\n"; }
    void fun3() { cout << "Child : Fun3\n"; }
};
int main()
{
    // base B;  // Object of PURE virtual class cant be made
    base *P; // Pointer of the PURE virtual class can be made

    // P = new base(); // object of the pure virtual class cant be made OR dynamically initialised
    P = new inherited();
    cout << "Pointer P of base class points to object of inherited\n";
    cout << "\nP->fun1() => ";
    P->fun1();
    cout << "\nP->fun2() => ";
    P->fun2();
    cout << "\nP->fun3() => ";
    P->fun3();
    return 0;
}