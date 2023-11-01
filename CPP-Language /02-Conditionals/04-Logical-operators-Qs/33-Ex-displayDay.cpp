#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter the number of day : ";
    cin >> day;

    if (day == 1)
        cout << "SUNDAY";

    else if (day == 2)
        cout << "MONDAY";

    else if (day == 3)
        cout << "TUESDAY";

    else if (day == 4)
        cout << "WEDNESDAY";

    else if (day == 5)
        cout << "THRUSDAY";

    else if (day == 6)
        cout << "FRIDAY";

    else if (day == 7)
        cout << "SATURDAY";

    else
        cout << "INVALID entry";
    return 0;
}