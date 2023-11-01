// Polymorphism
// • Same name different actions
// • Runtime Polymorphism is achieved using function overriding
// • Virtual functions are abstract functions of base class
// • Derived class must override virtual function
// • Base class pointer pointing to derived class object and a override function is called
// Summary : class car is defined, then sub classes override, then base class method made as virtual the pure virtual
#include <iostream>
using namespace std;
class Car
{
public:
    virtual void start() { cout << "\nCar started\n"; }
    virtual void stop() { cout << "\nCar stopped\n"; }
};

class Innova : public Car
{
public:
    void start() { cout << "\nInnova Started\n"; }
    void stop() { cout << "\nInnova stopped\n"; }
};

class Swift : public Car
{
public:
    void start() { cout << "\nSwift Started\n"; }
    void stop() { cout << "\nswift stopped\n"; }
};
int main()
{
    cout << "\n[Base Ptr] : Ptr\n";
    Car *Ptr = new Car();
    cout << "Ptr -> Base car object\n";
    Ptr->start();
    cout << "Ptr -> start()\n";
    Ptr->stop();
    cout << "Ptr  -> stop()\n\n";

    Ptr = new Innova();
    cout << "Ptr -> Innova object\n";
    Ptr->start();
    cout << "Ptr -> start() of Innova\n";
    Ptr->stop();
    cout << "Ptr -> stop() of Innova\n\n";

    Ptr = new Swift();
    cout << "Ptr -> Swift object\n";
    Ptr->start();
    cout << "Ptr -> start() of Swift\n";
    Ptr->stop();
    cout << "Ptr -> stop() of Swift\n";
}