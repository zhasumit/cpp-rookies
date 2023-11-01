#include <iostream>
using namespace std;

class base
{
public:
    void fun1() { cout << "Base : Fun1\n"; }
    void fun2() { cout << "Base : Fun2\n"; }
    void fun3() { cout << "Base : Fun3\n"; }
    void fun4() { cout << "Base : Fun4\n"; }
};
class inherited : public base
{
public:
    void fun5() { cout << "Inherited : Fun5\n"; }
    void fun6() { cout << "Inherited : Fun6\n"; }
};
int main()
{
    base B;
    cout << "\nBASE object B calling functions of base\n";
    cout << "\nB.fun1() => ";
    B.fun1();
    cout << "\nB.fun2() => ";
    B.fun2();
    cout << "\nB.fun3() => ";
    B.fun3();
    cout << "\nB.fun4() => ";
    B.fun4();

    base *P;
    P = new base();
    cout << "\nBASE Pointer P -> object of base\n";
    cout << "\nP->fun1() => ";
    P->fun1();
    cout << "\nP->fun2() => ";
    P->fun2();
    cout << "\nP->fun3() => ";
    P->fun3();
    cout << "\nP->fun4() => ";
    P->fun4();
    // cout << "\nP->fun5() => ";
    // P->fun5(); // pointer of base class cannot point to the functions of child class
    // cout << "\nP->fun6() => ";
    // P->fun6(); // pointer of base class cannot point to the functions of child class

    P = new inherited();
    cout << "\nBASE Pointer P -> object of inherited\n";
    cout << "\nP->fun1() => ";
    P->fun1();
    cout << "\nP->fun2() => ";
    P->fun2();
    cout << "\nP->fun3() => ";
    P->fun3();
    cout << "\nP->fun4() => ";
    P->fun4();
    // cout << "\nP->fun5() => ";
    // P->fun5(); // pointer of base class cannot point to the functions of child class
    // cout << "\nP->fun6() => ";
    // P->fun6(); // pointer of base class cannot point to the functions of child class
    cout << "\nALL concrete functions are made only for the sake of reusability\n";

    inherited I;
    cout << "\n--------------------------------------------\n";
    cout << "\nInherited object I calling functions of base\n";
    cout << "\nI.fun1() => ";
    I.fun1();
    cout << "\nI.fun2() => ";
    I.fun2();
    cout << "\nI.fun3() => ";
    I.fun3();
    cout << "\nI.fun4() => ";
    I.fun4();

    inherited *Iptr;
    // Iptr = new base(); // pointer of inherited cant point to the base class [parent class]

    Iptr = new inherited();
    cout << "\nInherited Pointer Iptr -> object of Inherited\n";
    cout << "\nIptr->fun1() => ";
    Iptr->fun1();
    cout << "\nIptr->fun2() => ";
    Iptr->fun2();
    cout << "\nIptr->fun3() => ";
    Iptr->fun3();
    cout << "\nIptr->fun4() => ";
    Iptr->fun4();
    cout << "\nIptr->fun5() => ";
    Iptr->fun5(); // pointer of inherited class can point to the functions of child class
    cout << "\nIptr->fun6() => ";
    Iptr->fun6(); // pointer of Inherited class can point to the functions of child class

    return 0;
}