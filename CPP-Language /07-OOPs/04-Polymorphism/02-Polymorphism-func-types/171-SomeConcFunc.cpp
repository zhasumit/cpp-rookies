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
    void fun3() { cout << "Base : Fun3\n"; }
    void PureVirtualFun() { cout << "PureVirtualFun\n\n"; }
};
int main()
{
    // base B;  // Object of PURE virtual class cant be made
    base *P; // Pointer of the PURE virtual class can be made

    // P = new base(); // object of the pure virtual class cant be made OR dynamically initialised
    P = new inherited();
    cout << "\nBase class pointer P\n";
    cout << "\nP->fun1() => ";
    P->fun1();
    cout << "\nP->fun2() => ";
    P->fun2();
    // cout << "\nP->fun3() => ";
    // P->fun3(); // pointer of base class cannot point to the functions of child class
    cout << "\nP->PureVirtualFun() => ";
    P->PureVirtualFun();

    inherited *I;
    I = new inherited();
    cout << "\nInherited class pointer I\n";
    cout << "\nI->fun1() => ";
    I->fun1();
    cout << "\nI->fun2() => ";
    I->fun2();
    cout << "\nI->fun3() => ";
    I->fun3(); // pointer of Inherited class can point to the functions of inherited class
    cout << "\nI->PureVirtualFun() => ";
    I->PureVirtualFun();
    return 0;
}