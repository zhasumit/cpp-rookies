#include <iostream>
using namespace std;

int min(int x = INT_MAX, int y = INT_MAX, int z = INT_MAX)
{
    int m = (x < y && x < z) ? x : (y < z ? y : z);
    return m;
}
int main()
{
    int a = 105, b = 17, c = 11;
    cout << "a        : " << a << endl;
    cout << "b        : " << b << endl;
    cout << "c        : " << c << "\n\n";

    cout << "min(a)       : " << min(a) << endl;
    cout << "min(a, b)    : " << min(a, b) << endl;
    cout << "min(a, b, c) : " << min(a, b, c) << endl;
    return 0;
}