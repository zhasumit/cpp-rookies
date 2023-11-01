#include <iostream>
using namespace std;

class MyExceptionParent
{
};
class MyExceptionChild
{
};

int main()
{
    int a;
    cout << "Enter exception: \n";
    cout << "1 : Parent class exception\n2 : Child class exception\nelse : All-Catch\n\n";
    cout << "Choice : ";
    cin >> a;
    try
    {
        if (a == 1)
            throw MyExceptionParent();
        if (a == 2)
            throw MyExceptionChild();
        else
            throw "All-Catch Exception";
    }
    catch (MyExceptionChild e)
    {
        cout << "Child class exception\n\n";
    }
    catch (MyExceptionParent e)
    {
        cout << "parent class exception\n\n";
    }
    catch (...) // must be at the last [can get the data if any throw doesnt match]
    {           // not know exact exception
        cout << "All-Catch\n\n";
    }
    return 0;
}