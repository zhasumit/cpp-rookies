#include <iostream>
using namespace std;

class innovaCar
{
private:
    int a = 2500000;

public:
    static int price;
    // price = 2500000; // static members cant be initialised
    static int getPrice()
    {
        return price;
    }
};
int innovaCar::price = 2500000;

int main()
{
    cout << "\nCalling the getPrice() using class name \n";
    Car::getPrice();
    cout << " << innovaCar::getPrice();
        innovaCar myCar1,
        myCar2, myCar3;
    cout << "\n\nCalling the getPrice() using Object of innovaCar \n";
    cout << "myCar1.getPrice() : " << myCar1.getPrice() << "\n";
    cout << "myCar2.getPrice() : " << myCar2.getPrice() << "\n";
    cout << "myCar3.getPrice() : " << myCar3.getPrice() << "\n\n";
    // So, you donot need to buy the object of innovaCar to know its price

    return 0;
}