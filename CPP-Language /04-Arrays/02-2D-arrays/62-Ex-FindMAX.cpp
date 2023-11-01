#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];

    cout << "Enter the elements of the array : ";
    for (int &x : a)
        cin >> x;

    int max = INT_MIN, min = INT_MAX;
    for (int x : a)
    {
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }
    cout << "Max : " << max << "\n";
    cout << "Min : " << min << "\n";

    return 0;
}