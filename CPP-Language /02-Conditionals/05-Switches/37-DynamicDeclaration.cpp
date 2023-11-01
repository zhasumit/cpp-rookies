#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the value of a and b";
    if (int c = a + b; c < 10) // variable declared and used in if [C++17 feature]
        cout << "a + b > 10";
    // life of c ends after the if block

    {
        int c = a + b;
        if (c > 10)
            cout << "a + b > 10";
    } // life of  cends after the dummy block
    // The sole purpose of dummy block is to limit the scope of variable c
    return 0;
}