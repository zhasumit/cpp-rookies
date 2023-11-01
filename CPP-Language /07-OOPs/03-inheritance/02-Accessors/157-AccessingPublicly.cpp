#include <iostream>
using namespace std;

class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void parentFun()
    {
        a = 1;
        b = 2;
        c = 3;
        cout << "\n----------Parent class----------\n";
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
    }
    int getA() { return a; }
    int getB() { return b; }
    int getC() { return c; }
};

class child : public parent
{
public:
    void childFun()
    {
        // a = 10;  // a CANNOT be accessible since it is  PRIVATE member of parent
        b = 20; // b CAN be modified since it is PROTECTED of parent
        c = 30; // c CAN be modified since it is PUBLIC of parent
        cout << "\n----------Child class----------\n";
        cout << "a : " << getA() << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
    }
    int getChildB() { return b; }
    int getChildC() { return c; }
};

class grandChild : public child
{
public:
    void grandChildFun()
    {
        // a = 11;  // a CANNOT be accessible since it is  PRIVATE member of parent
        b = 21; // b CAN be modified since it is PROTECTED of child INHERITED
        c = 31; // c CAN be modified since it is PUBLIC of child INHERITED
        cout << "\n----------GrandChild class----------\n";
        cout << "a : " << getA() << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
    }
    int getGrandchildB() { return b; }
    int getGrandchildC() { return c; }
};

int main()
{
    parent p;
    // p.a = 100; // a CANT be accessed since it is PRIVATE of parent
    // p.b = 200; // b CANT be accessed since it is PROTECTED of parent
    p.c = 300; // c CAN be accessed since it is PUBLIC of parent

    cout << "\n----------Main [Parent]----------\n";
    cout << "a : " << p.getA() << endl;
    cout << "b : " << p.getB() << endl;
    cout << "c : " << p.c << endl;
    p.parentFun();

    child c;
    // c.a = 1001; // a CANT be accessed since it is PRIVATE of child
    // c.b = 2001; // b CANT be accessed since it is PROTECTED of child
    c.c = 3001; // c CAN be accessed since it is PUBLIC of child
    cout << "\n----------Main [Child]----------\n";
    cout << "a : " << c.getA() << endl;
    cout << "b : " << c.getChildB() << endl;
    cout << "c : " << c.c << endl;
    c.childFun();

    grandChild g;
    // g.a = 1010; // a CANT be accessed since it is PRIVATE of child
    // g.b = 2010; // b CANT be accessed since it is PROTECTED of child
    g.c = 3010; // c CAN be accessed since it is PUBLIC of child
    cout << "\n----------Main [GrandChild]----------\n";
    cout << "a : " << g.getA() << endl;
    cout << "b : " << g.getGrandchildB() << endl;
    cout << "c : " << g.getGrandchildC() << endl;
    g.grandChildFun();
    return 0;
}