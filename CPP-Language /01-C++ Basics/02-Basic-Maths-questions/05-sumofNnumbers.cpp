#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << "Sum of " << n << "natural numbers = " << (n * (n + 1)) / 2 << endl;
    return 0;
}