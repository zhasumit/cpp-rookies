#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter n to find factorial : ";
    cin >> n;
    for (int i = n; i >= 1; i--)
        fact *= i;
    cout << n << "! = " << fact << endl;
}