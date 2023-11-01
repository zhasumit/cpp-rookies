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

    int P = 0, N = 0, Z = 0;
    for (int &x : a)
    {
        if (x < 0)
            N++;
        if (x > 0)
            P++;
        if (x == 0)
            Z++;
    }

    cout << "Positives : " << P << "\n";
    cout << "Negatives : " << N << "\n";
    cout << "Zeroes : " << Z << "\n";
    return 0;
}