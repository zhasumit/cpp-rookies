#include <iostream>
using namespace std;

int power(int a, int b)
{
    int c = 1;
    while (b--)
    {
        c *= a;
    }
    return c;
}
int main()
{
    int m, n;
    cout << "m : ";
    cin >> m;
    cout << "n : ";
    cin >> n;
    cout << m << "^" << n << " = " << power(m, n);
    return 0;
}