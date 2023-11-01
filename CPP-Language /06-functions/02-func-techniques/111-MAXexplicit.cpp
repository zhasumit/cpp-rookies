#include <iostream>
using namespace std;

int max(int x = 0, int y = 0, int z = 0)
{
    int m = (x > y && x > z) ? x : (y > z ? y : z);
    return m;
}

int main()
{
    int a = 10, b = 17, c = 21;
    cout << "a        : " << a << endl;
    cout << "b        : " << b << endl;
    cout << "c        : " << c << "\n\n";

    cout << "max()        : " << max() << endl;
    cout << "max(a)       : " << max(a) << endl;
    cout << "max(a, b)    : " << max(a, b) << endl;
    cout << "max(a, b, c) : " << max(a, b, c) << endl;
    return 0;
}