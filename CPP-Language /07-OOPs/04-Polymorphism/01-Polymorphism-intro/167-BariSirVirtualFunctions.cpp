// Virtual Functions
// • Virtual functions are used for achieving polymorphism
// • Base class can have virtual functions
// • Virtual functions can be overrides in derived class
// • Pure virtual functions must be overrides by derived class
#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start() { cout << "\nBaseCar started\n"; }
};

class AdvanceCar : public BasicCar
{
public:
    void start() { cout << "\nAdvanceCar started\n"; }
};

int main()
{
    AdvanceCar *A = new AdvanceCar();
    cout << "\nAdvanceCar pointer *A -> AdvanceCar object ";
    A->start();

    BasicCar *B = new BasicCar();
    cout << "\nBaseCar pointer *B -> BaseCar object ";
    B->start();

    B = new AdvanceCar();
    cout << "\nBaseCar pointer *B -> AdvanceCar object ";
    B->start();
    delete A;
    delete B;
    return 0;
}