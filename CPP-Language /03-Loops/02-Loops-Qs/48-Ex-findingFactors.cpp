#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to find its factors : ";
    cin >> n;

    cout << "Factors of " << n << " are : \n";
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << "\n";
    return 0;
}