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
    friend ClassC;
    int getA() { return a; }
    int getB() { return b; }
    int getC() { return c; }
};

class ClassB
{
    void fun()
    {
        ClassA a;
        // a.a = 10; // objects cant access private attributes
        // a.b = 20; // objects cant access protected attributes
        a.c = 30;
    }
};

class ClassC
{
    void fun()
    {
        ClassA b;
        b.a = 100; // Friend Classes CAN access private attributes
        b.b = 200; // Friend Classes CAN access PROTECTED attributes
        b.c = 300;
    }
};
int main() { return 0; }