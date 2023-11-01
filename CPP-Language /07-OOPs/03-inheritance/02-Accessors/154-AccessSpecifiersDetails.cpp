#include <iostream>
using namespace std;

class base
{
private:
    float BaseX;

protected:
    float BaseY;

public:
    float BaseZ;
    void baseFun()
    {
        cout << "\n-------SAME Class-------\n";

        BaseZ = 3; // CAN Acess a PUBLIC attribute of class
        cout << "public    : BaseZ : " << BaseZ << "\n";

        BaseY = 2; // CAN Acess a PROTECTED attribute of class
        cout << "protected : BaseY : " << BaseY << "\n";

        BaseX = 1; // CAN Acess a PRIVATE attribute of class
        cout << "private   : BaseX : " << BaseX << "\n";
    }
};
class derived : public base
{
public:
    void derivedFun()
    {
        cout << "\n-------INHERITED Class-------\n";

        BaseZ = 30; // CAN Acess a PUBLIC attribute of class
        cout << "public    : BaseZ : " << BaseZ << "\n";

        BaseY = 20; // CAN Acess a PROTECTED attribute of class
        cout << "protected : BaseY : " << BaseY << "\n";

        // BaseX = 10; // CAN'T access the PRIVATE attributes of a class
    }
};
int main()
{
    base b;
    derived d;
    b.baseFun();
    d.derivedFun();

    cout << "\n-------OUTSIDE Class-------\n";
    b.BaseZ = 300; // CAN Acess a PUBLIC attribute of class
    cout << "public    : BaseZ : " << b.BaseZ << "\n\n";

    // b.BaseY = 200; // CAN'T Acess a PROTECTED attribute of class

    // b.BaseX = 100; // CAN'T access the PRIVATE attributes of a class
    return 0;
}