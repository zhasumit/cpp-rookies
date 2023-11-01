#include <iostream>
using namespace std;

void fun(int a)
{
    if (a > 0)
    {
        // FIRSTLY printing value of the current call
        cout << a << endl;

        // calling fun() for consecutive n-1 values and printing accordingly
        fun(a - 1);
    }
}
void fun2(int a)
{
    if (a > 0)
    {
        // FIRST Calling the function for n-1 values recursively
        fun2(a - 1);

        // SECONDLY printing the values
        // from the last call to the first call for which originally fun() was called for
        cout << a << endl;
    }
}
int main()
{
    int n = 5;
    cout << "Printing current value -> Recursive calling (n-1) " << endl;
    fun(n);

    n = 5;
    cout << "Recursive calling (n-1) -> Printing current value" << endl;
    fun2(n);
    return 0;
}