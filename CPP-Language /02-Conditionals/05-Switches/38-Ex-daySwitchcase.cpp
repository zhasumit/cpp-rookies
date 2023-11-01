#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter the day number : ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Sunday\n";
        break;
    case 2:
        cout << "Monday\n";
        break;
    case 3:
        cout << "Tuesday\n";
        break;
    case 4:
        cout << "Wednesday\n";
        break;
    case 5:
        cout << "Thrusday\n";
        break;
    case 6:
        cout << "Friday\n";
        break;
    case 7:
        cout << "Saturday\n";
        break;

    default:
        cout << "INVALID entry\n";
    }
    return 0;
}