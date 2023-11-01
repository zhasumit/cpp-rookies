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
};
int ClassA::count;

int main()
{
    ClassA Aobj;
    cout << "\nAobj.count    : " << Aobj.count;
    ClassA Bobj;
    cout << "\nBobj.count    : " << Bobj.count;
    cout << "\nClassA::count : " << ClassA::count;
    return 0;
}