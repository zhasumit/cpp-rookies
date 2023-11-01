#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int key, a[n];

    cout << "Enter the elements of the array : ";
    for (int &x : a)
        cin >> x;
    cout << "Enter element to be found : ";
    cin >> key;

    for (int i = 0; i < n; i++) // Since foreach doesnt work on indices
        if (a[i] == key)
        {
            cout << "FOUND at index : " << i;
            n = -1;
            break;
        }
    if (n != -1)
        cout << "NOT Found";
    return 0;
}