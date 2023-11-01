#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n to find it is perfect or not : ";
    cin >> n;

    // if sum of the factors except the number itself add to give the number then the number is called perfect
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;

    if (n == sum)
        cout << n << " is a PERFECT number" << endl;
    else
        cout << n << " is a NOT perfect number" << endl;
}