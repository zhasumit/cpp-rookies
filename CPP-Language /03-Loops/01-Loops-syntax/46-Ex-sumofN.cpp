#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter N, to find sum of N numbers : ";
    cin >> n;
    cout << "Using formula :\nSum of " << n << " numbers : " << (n * (n + 1)) / 2 << "\n";

    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "\nUsing loops :\nSum of " << n << " numbers : " << sum;
    return 0;
}