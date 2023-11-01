#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    float sum = 0.0f, arr[n];
    cout << "Enter array : ";
    for (auto &x : arr)
        cin >> x;

    for (auto &x : arr)
        sum += x;
    cout << "Average : " << (sum / n);
    return 0;
}