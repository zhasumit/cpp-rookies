#include <iostream>
using namespace std;

class ClassA
{
private:
    int a, b;

public:
    static int count;
    ClassA()
    {
        a = 10;
        b = 10;
        count++;
    }
    // static member function can only use the static variable {attributes}
    // static members can not access non-static variables
    // static member functions only belong to a funtion
    static int getCount() { return ++count * 2; }
};
int ClassA::count; // global variables but only available to be used in the ClassA class

int main()
{
    ClassA Aobj;
    cout << "\nAobj.count    : " << Aobj.count;
    ClassA Bobj;
    cout << "\nBobj.count    : " << Bobj.count;
    cout << "\nClassA::count : " << ClassA::count;

    // using getcount static member functions
    cout << "\n\ngetCount [Static member function]";
    cout << "\nAobj.getCount : " << Aobj.getCount();
    cout << "\nAobj.count    : " << Bobj.count;
    cout << "\nBobj.getCount : " << Bobj.getCount();
    cout << "\nBobj.count    : " << Bobj.count;
    cout << "\nClassA::count : " << ClassA::count;

    return 0;
}