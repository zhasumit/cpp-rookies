// Friend functions are the functions that enable to acees the all members
#include <iostream>

class ClassA
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend void FriendFun();
    int getA() { return a; }
    int getB() { return b; }
    int getC() { return c; }
};

void fun()
{
    ClassA a;
    // a.a = 10; // objects cant access private attributes
    // a.b = 20; // objects cant access protected attributes
    a.c = 30;
}

void FriendFun()
{
    ClassA b;
    b.a = 100; // Friend Functions CAN access private attributes
    b.b = 200; // Friend Functions CAN access PROTECTED attributes
    b.c = 300;
}
int main() { return 0; }