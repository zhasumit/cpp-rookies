#include <iostream>
using namespace std;

int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}

int min(int x, int y, int z)
{
    if (x < y && x < z)
        return x;
    else if (y > z)
        return y;
    else
        return z;
    ;
}

float min(float x, float y)
{
    if (x < y)
        return x;
    else
        return y;
}

float min(float x, float y, float z)
{
    if (x < y && x < z)
        return x;
    else if (y < z)
        return y;
    else
        return z;
}

int main()
{
    int a = 10, b = 20, c, d;
    c = min(a, b);
    cout << "min : " << c << endl;

    d = min(a, b, c);
    cout << "min : " << d << endl;

    float A = 2.65, B = 5.78, C = 1.0, D;
    C = min(A, B);
    cout << "min : " << C << endl;
    D = min(A, B, C);
    cout << "min : " << D << endl;
    return 0;
}