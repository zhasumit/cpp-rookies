#include <iostream>
using namespace std;

int main()
{
    float u, v, a;
    cout << "Enter the value of u and v and a";
    cout << "U : ";
    cin >> u;
    cout << "V : ";
    cin >> v;
    cout << "a : ";
    cin >> a;
    float speed = ((v * v) - (u * u)) / (2 * a);
    cout << "Speed : " << speed;
    return 0;
}