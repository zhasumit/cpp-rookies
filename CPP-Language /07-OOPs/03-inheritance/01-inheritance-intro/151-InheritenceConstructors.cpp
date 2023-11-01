#include <iostream>
using namespace std;

class base
{
public:
    base() { cout << "Base()\n"; }
    base(int x) { cout << "Base(int x) x : " << x << "\n"; }
};
class derived : public base
{
public:
    derived() { cout << "Derived()\n"; }
    derived(int x) { cout << "Derived(int x) x : " << x << "\n"; }
    derived(int a, int x) : base(x) { cout << "Derived(int x) x,a : " << x << a << "\n\n"; }
};
int main()
{
    cout << "\nBy default the base constructor is called\n";
    cout << "\nCalling base()... \n";
    base();

    cout << "\n\nCalling base(10)... \n";
    base(10);

    cout << "\n\nCalling derived()... \n";
    derived();

    cout << "\n\nCalling derived(20)... \n";
    derived(20);

    cout << "\n\nCalling derived(30, 40)... \n";
    derived(30, 40);
    return 0;
}