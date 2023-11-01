#include <iostream>
using namespace std;

int linearSearch(int A[], int size, int key)
{
    for (int i = 0; i < size; i++)
        if (key == A[i])
            return i;
    return -1;
}

int main()
{
    int size, key;
    cout << "Enter the size of array : ";
    cin >> size;
    int A[size];

    for (int &i : A)
        cin >> i;

    cout << "Enter element to be found : ";
    cin >> key;
    {
        int index = linearSearch(A, size, key);
        if (index != -1)
            cout << "Element FOUND at position : " << index + 1;
        else
            cout << "Element NOT FOUND\n";
    }
    return 0;
}