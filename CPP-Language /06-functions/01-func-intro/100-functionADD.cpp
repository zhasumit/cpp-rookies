#include <iostream>
using namespace std;
float ADD(float a, float b) // Prototype/Header of the function
{
    // a,b are formal parameters
    float z = a + b;
    return z;
}
int main()
{
    float x, y;
    cout << "Enter two values to be added : ";
    cin >> x >> y;
    ADD(x, y); // x,y are actual parameters
    // values of the actual parameters are copied to the formal parameters
    return 0;
}
