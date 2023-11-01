#include <iostream>
using namespace std;

class base
{
public:
    void fun1() { cout << "Base    : Fun1\n"; }
    void fun2() { cout << "Base    : Fun2\n"; }
    void fun3() { cout << "Base    : Fun3\n"; }
};
class derived : public base
{
public:
    void fun4() { cout << "Derived : Fun4\n"; }
    void fun5() { cout << "Derived : Fun5\n"; }
};
int main()
{
    base b;
    cout << "\n---Calling via object of base---\n";
    b.fun1();
    b.fun2();
    b.fun3();

    cout << "\n---Calling via object of derived---\n";
    derived d;
    d.fun1();
    d.fun2();
    d.fun3();
    d.fun4();
    d.fun5();

    // creating a pointer of base class pointing to derived class
    cout << "\n---Calling via ptr of derived -> base---\n";
    base *ptr = &d;
    // Even though the pointer points to derived class
    // ptr can only access base class since it is a pointer of base class
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
    cout << "The functions of the derived class cant be called using pointer of base class\n";
    // ptr->fun4();
    // ptr->fun5();

    // the derived class pointers cannot point to rhe object of base class
    // derived *P = &b;
    // same as if you know advance tech you cant become basic again you cant UNDO stuff
}