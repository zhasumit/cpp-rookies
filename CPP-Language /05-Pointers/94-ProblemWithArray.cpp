#include <iostream>
using namespace std;
int main()
{
    // intilising the array of size 10
    int A[10] = {12, 89, 6, 47, 85, 2, 24, -1, 30, 52};
    cout << "The array A : ";
    for (int x : A)
        cout << x << " ";

    // The same array cant be again resized and initialised to a set of values
    // A[13] = {23, 63, 58, 59, 66, 84, 58, 65, 25, 41, 51, 23, 24};
    // for (int x : A)
    //     cout << x << " ";

    return 0;
}