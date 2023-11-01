#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter the number upto which you want to print : ";
    cin >> n;

    // While loop
    cout << "While loop" << endl;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    cout << endl;

    // Do While loop
    i = 1;
    cout << "Do While loop" << endl;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);
    cout << endl;

    // for loop
    cout << "For loop" << endl;
    for (i = 1; i <= n; i++)
        cout << i << endl;
    return 0;
}