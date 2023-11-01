#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    if (number >= 0 && number < 10)
    {
        if (number == 0)
            cout << "Zero";

        else if (number == 1)
            cout << "One";

        else if (number == 2)
            cout << "Two";

        else if (number == 3)
            cout << "Three";

        else if (number == 4)
            cout << "Four";

        else if (number == 5)
            cout << "Five";

        else if (number == 6)
            cout << "Six";

        else if (number == 7)
            cout << "Seven";

        else if (number == 8)
            cout << "Eight";

        else if (number == 9)
            cout << "Nine";
    }

    else
        cout << "INVALID entry";
    return 0;
}