#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int *p = new int[size];

    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
        cin >> p[i];

    cout << "Array pointed by pointer p : ";
    for (int i = 0; i < size; i++)
        cin >> p[i];

    // DELETING the pointer to AVOID memory leak
    delete[] p;

    // The same pointer can be used to point at different dynamically allocated memory
    cout << "Enter NEW SIZE of array : ";
    cin >> size;
    // SAME pointer p points to different array of NEWSIZE
    int *p = new int[size];

    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
        cin >> p[i];

    cout << "Array pointed by pointer p : ";
    for (int i = 0; i < size; i++)
        cin >> p[i];

    // DELETING the pointer to AVOID memory leak
    delete[] p;
    // POINTING the pointer to null so that the pointer doesnt keep any heap location
    p = nullptr;
    return 0;
}