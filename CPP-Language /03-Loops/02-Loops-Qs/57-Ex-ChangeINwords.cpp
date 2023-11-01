#include <iostream>
using namespace std;

int main()
{
    int n, rem, rev = 0;
    cout << "Enter the number : ";
    cin >> n;
    int temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    cout << rev << endl;
    while (rev > 0)
    {
        rem = rev % 10;
        rev /= 10;
        switch (rem)
        {
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    return 0;
}