#include <iostream>
using namespace std;

enum day
{
    sun = 1,
    mon,
    tue,
    wed,
    thr,
    fri,
    sat
};
int main()
{
    // The benifits using the enum is that program becomes readable

    day d;
    // datatype = day variable d

    d = sun;
    // sun++ cant be done since they are constants
    cout << "Day : Sunday    : " << d << endl;

    d = mon;
    cout << "Day : Monday    : " << d << endl;

    d = tue;
    cout << "Day : Tueday    : " << d << endl;

    d = wed;
    cout << "Day : Wednesday : " << d << endl;

    d = thr;
    cout << "Day : Thrusday  : " << d << endl;

    d = fri;
    cout << "Day : Friday    : " << d << endl;

    d = sat;
    cout << "Day : Satday    : " << d << endl;
    return 0;
}