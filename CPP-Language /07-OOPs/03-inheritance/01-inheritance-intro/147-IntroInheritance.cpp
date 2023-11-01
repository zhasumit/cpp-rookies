#include <iostream>
using namespace std;
class base
{
public:
    int x;
    void show()
    {
        cout << x << "\n";
    }
};
class derived : public base
{
public:
    int y;
    void display()
    {
        cout << x << " " << y << "\n";
    }
};
int main()
{
    cout << "Base Class : ";
    base a;
    a.x = 10;
    a.show();

    cout << "Derived Class : ";
    derived b;
    b.x = 20;
    b.y = 30;
    b.show();
    b.display();
    return 0;
}