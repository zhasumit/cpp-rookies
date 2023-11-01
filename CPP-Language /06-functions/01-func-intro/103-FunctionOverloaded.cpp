#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

float add(float x, float y)
{
    return x + y;
}

float add(float x, float y, float z)
{
    return x + y + z;
}

int main()
{
    int a = 10, b = 20, c, d;
    c = add(a, b);
    cout << "sum : " << c << endl;

    d = add(a, b, c);
    cout << "sum : " << d << endl;

    float A = 2.65, B = 5.78, C, D;
    C = add(A, B);
    cout << "sum : " << C << endl;

    D = add(A, B, C);
    cout << "sum : " << D << endl;
    return 0;
}