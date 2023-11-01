#include <iostream>
using namespace std;
int *arrayinHeap(int size)
{
    int *ptr = new int[size]; // an array of int type of size is initalised in heap
    cout << "Enter the value of the array : \n";

    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "] : ";
        cin >> ptr[i];
    }
    cout << "\nptr : " << ptr << "\n";
    return ptr; // base value of ptr is returned [address]
}
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int *p = arrayinHeap(size);

    // Displays the address of pointer p
    cout << "p   : " << p << "\n";

    // Displays the array in the heap
    cout << "\nARRAY : \n";
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "] : " << p[i] << "\n";
    }

    delete[] p;  // deletes the array that it points in heap
    p = nullptr; // points to NULL

    return 0;
}