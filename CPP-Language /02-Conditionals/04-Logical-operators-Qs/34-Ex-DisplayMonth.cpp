#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter the number of Month : ";
    cin >> month;

    if (month == 1)
        cout << "JANUARY";

    else if (month == 2)
        cout << "FEBRUARY";

    else if (month == 3)
        cout << "MARCH";

    else if (month == 4)
        cout << "ARPRIL";

    else if (month == 5)
        cout << "MAY";

    else if (month == 6)
        cout << "JUNE";

    else if (month == 7)
        cout << "JULY";

    else if (month == 8)
        cout << "AUGUST";

    else if (month == 9)
        cout << "SEPTEMBER";

    else if (month == 10)
        cout << "OCTOBER";

    else if (month == 11)
        cout << "NOVEMBER";

    else if (month == 12)
        cout << "DECEMBER";

    else
        cout << "INVALID entry";
    return 0;
}