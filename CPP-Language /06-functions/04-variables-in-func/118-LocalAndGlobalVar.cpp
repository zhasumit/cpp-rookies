#include <iostream>
using namespace std;
int g = 10; // g is the global variable

void fun()
{
    cout << "fun()\n";
    g++;
    cout << g << "\n";
    int a = 10; // a is the local variable
    g += a;
    cout << g << "\n";
}

void fun2()
{
    cout << "fun()2\n";
    int g = 101; // g is a local variable
    {
        cout << "In a block -> fun2()\n";
        int g = -1; // g is again a local scope here
        cout << g << "\n";
    }
    cout << g << "\n";
}

int main()
{
    cout << "main()\n";
    g++;
    cout << g;
    fun();
    fun2();
    return 0;
}