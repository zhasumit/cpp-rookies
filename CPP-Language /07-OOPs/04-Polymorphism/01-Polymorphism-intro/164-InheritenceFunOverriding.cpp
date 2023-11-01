#include <iostream>
using namespace std;

class base
{
public:
    void SHOW() { cout << "\nBase: SHOW\n"; }
    void display() { cout << "\nBase : Display\n"; }
};

class child : public base
{
public:
    void display() { cout << "\nChild : Display\n"; }
    void display(int x) { cout << "\nChild(int x) : Display\n"; }
};

int main()
{
    base B;
    B.SHOW();    // access SHOW() of base class
    B.display(); // access display() of base class

    child C;
    C.base::SHOW(); // OR C.SHOW() can access SHOW() of base class
    C.display();    // access display() of child class
    C.display(10);  // access display(int x) of child class
    return 0;
}