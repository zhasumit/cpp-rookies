#include <iostream>
using namespace std;

class base
{
public:
    void fun1() { cout << "Base : Fun1\n"; }
    void fun2() { cout << "Base : Fun2\n"; }
    virtual void PureVirtualFun() = 0; // PureVirtualClass : for the sake of polymorphism
};
class inherited : public base
{
public:
    void PureVirtualFun() { cout << "PureVirtualFun\n\n"; }
};
int main()
{
    // base B;  // Object of PURE virtual class cant be made
    base *P; // Pointer of the PURE virtual class can be made

    // P = new base(); // object of the pure virtual class cant be made OR dynamically initialised
    P = new inherited();
    cout << "\nP->fun1() => ";
    P->fun1();
    cout << "\nP->fun2() => ";
    P->fun2();
    cout << "\nP->PureVirtualFun() => ";
    P->PureVirtualFun();
    return 0;
}