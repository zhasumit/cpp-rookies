#include <iostream>
using namespace std;

int main()
{
    // memory intitalisation of array in stack
    int A[5] = {2, -9, 8, 6, 5};
    for (auto i : A)
        cout << i;

    // Dynamic memory initialisation of pointer p with an array in heap
    int *p = new int[5];
    p[0] = 5;
    p[1] = -9;
    p[2] = 71;
    p[3] = 92;
    p[4] = 21;

    // Displaying the dynamically allocated memory
    for (int i = 0; i < 4; i++)
        cout << p[i];

    // Deleting the memory pointed by p
    delete[] p;

    p = nullptr; // making the pointer as NULL (method 2: p = NULL)

    return 0;
}