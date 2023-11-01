#include <iostream>
using namespace std;

int main()
{
    int rollNo;
    cout << "Enter the roll number : ";
    cin >> rollNo;

    if (rollNo < 0)
        cout << "INVALID Roll number\n";
    else
        cout << "VALID Roll number\n";
    return 0;
}