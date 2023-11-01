// Access Specifiers
// • Private - Accessible only inside a class
// • Protected - Accessible inside a class and inside derived classes
// • Public - accessible inside class, inside derived class and upon object class Base
class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funBase()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
class Derived : public Base
{
public:
    void funDerived()
    {
        // a = 10; CANT access private
        b = 5;
        c = 15;
    }
};
int main()
{
    Base b;
    // b.a = 10; CANT access private
    // b.b = 5;  CANt access protected
    b.c = 20;
    return 0;
}