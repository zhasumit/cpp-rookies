#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int a[n];

    cout << "Enter elements of array in SORTED order : \n";
    for (int &x : a)
        cin >> x;

    cout << "Enter the element to be found : ";
    cin >> key;

    int low = 0, high = n - 1, mid, found;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            cout << "Element found at : " << mid << "\n";
            found = -1;
            break;
        }

        if (key < a[mid])
            high = mid - 1;

        if (key > a[mid])
            low = mid + 1;
    }

    if (found != -1)
        cout << "NOT FOUND";

    return 0;
}