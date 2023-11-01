#include <iostream>
using namespace std;

int main()
{
    int hour;
    if (hour >= 0 && hour <= 23)
    {
        if (hour >= 9 && hour <= 18)
            cout << "WORKING hours\n";
        else
            cout << "LEISURE hours\n";
    }

    else
        cout << "INVALID hours\n";
    return 0;
}