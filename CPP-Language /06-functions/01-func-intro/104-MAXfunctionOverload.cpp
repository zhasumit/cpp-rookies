#include <iostream>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int max(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > z)
        return y;
    else
        return z;
    ;
}

float max(float x, float y)
{
    if (x > y)
        return x;
    else
        return y;
}

float max(float x, float y, float z)
{
    if (x > y && x > z)
        return x;
    else if (y > z)
        return y;
    else
        return z;
}

int main()
{
    int a = 10, b = 20, c, d;
    c = max(a, b);
    cout << "max : " << c << endl;
    d = max(a, b, c);
    cout << "max : " << d << endl;

    float A = 2.65, B = 5.78, C, D;
    C = max(A, B);
    cout << "max : " << C << endl;
    D = max(A, B, C);
    cout << "max : " << D << endl;
    return 0;
}