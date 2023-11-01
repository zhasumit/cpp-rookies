#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;

    for (int x : a)
        sum += x;
    cout << "Sum of array : " << sum;
    return 0;
}