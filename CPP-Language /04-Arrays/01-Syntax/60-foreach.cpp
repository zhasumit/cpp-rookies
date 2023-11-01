#include <iostream>
using namespace std;

int main()
{
    int a[10] = {18, -6, 36, -8, 54, 3, 6, 15, 22, 33};

    // foreach loop -> useful for assessing array elements ==> C++11
    // declaring element x for the current element in a
    // It iterates and a[i] is assigned to x in every i'th iteration
    cout << "\nArray a\n";
    for (int x : a)
        cout << x << endl;

    // it works on basis of size of the array and not on the elements assigned to it
    int b[15] = {6, 45, -2, 0, 8};
    cout << "\nArray b\n";
    for (int x : b)
        cout << x << endl;

    float f[] = {2.5f, 6.3f, 8.9f, -2.8f, 7, -9.8f};
    cout << "\nfloat Array f assessed using int accessor in foreach\n";
    // truncates all the float values to int type
    for (int x : f)
        cout << x << endl;

    cout << "\nArray f using float accessor in foreach\n";
    for (float x : f)
        cout << x << endl;

    char c[7] = {'A', 66, 'C', 68};
    cout << "\nArray c using char accessor in foreach\n";
    for (char x : c)
        cout << x << endl;

    cout << "\nArray c using int accessor in foreach\n";
    for (int x : c)
        cout << x << endl;

    cout << "\nArray c using auto accessor in foreach\n";
    for (auto x : c)
        cout << x << endl;
    return 0;
}