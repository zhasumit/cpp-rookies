#include <iostream>
using namespace std;
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
    float a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    // calling the function and displaying at the same time
    cout << "Max of " << a << ", " << b << " and " << c << " is : " << max(a, b, c);
    return 0;
}