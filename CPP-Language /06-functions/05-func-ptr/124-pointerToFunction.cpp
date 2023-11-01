#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    int m, n;
    cout << "Enter two numbers \nm: ";
    cin >> m;
    cout << "n: ";
    cin >> n;

    int (*PtrFunc)(int, int); // assigning signature to the pointer to function

    PtrFunc = max; // pointer to function points to address of max
    cout << "Max : " << (*PtrFunc)(m, n) << endl;

    PtrFunc = min; // pointer to function points to address of min
    cout << "Min : " << (*PtrFunc)(m, n) << endl;

    return 0;
}
// pointer to function is used for runtime polymorphism [Function Overriding]