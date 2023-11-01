#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun() { cout << "\nFun of BASE\n"; }
};

class derived : public base
{
public:
    void fun() { cout << "\nFun of DERIVED\n"; }
};

int main()
{
    base *B = new base();
    cout << "\nBase pointer *B -> base object ";
    B->fun();

    B = new derived();
    cout << "\nBase pointer *B -> derived object ";
    B->fun();

    derived *D = new derived();
    cout << "\nDerived pointer *D -> derived object ";
    D->fun();
}