#include <iostream>
using namespace std;

int main()
{
    int A[10];
    // Array A consists of some garbage vlaues
    cout << "\nArray A\n";
    for (int i = 0; i < 10; i++)
        cout << A[i] << endl;

    int B[5] = {3, 8, 6, 9, 11};
    // Array B consists of assigned values
    cout << "\nArray B\n";
    for (int i = 0; i < 5; i++)
        cout << B[i] << endl;

    int C[7] = {48, 58, -2, 3};
    // Array C is half initialised and rest values are zeroes
    cout << "\nArray C\n";
    for (int i = 0; i < 7; i++)
        cout << C[i] << endl;

    int D[] = {12, 258, -9, 63, 98, -7, 12, 2, 59};
    // Array C is not havinf pre-instructed size
    cout << "\nArray C\n";
    for (int i = 0; i < 9; i++)
        cout << D[i] << endl;

    return 0;
}