#include <iostream>
using namespace std;

void fun()
{
    int A = 10;
    static int a = 1; // only once initialised
    cout << "Static a : " << a << "\tLocal  A : " << A << endl;
    a++;
}
int main()
{
    fun();
    fun();
    fun();
    fun();
    fun();
    return 0;
}