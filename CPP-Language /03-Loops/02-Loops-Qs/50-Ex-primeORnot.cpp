#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter n to find it is prime or not : ";
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
        {
            flag++;
            break;
        }
    if (flag == 0)
        cout << "PRIME";
    else
        cout << "COMPOSITE";
}
