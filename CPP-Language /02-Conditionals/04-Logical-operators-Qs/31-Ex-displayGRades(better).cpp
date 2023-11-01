#include <iostream>
using namespace std;

int main()
{
    float marks, n;
    cout << "Enter the average marks of the students : ";
    cin >> marks;
    cout << "Enter the number of subjects : ";
    cin >> n;

    float avg = (marks / n);

    if (avg > 90 && avg <= 100)
        cout << "A+";

    if (avg > 80 && avg <= 90)
        cout << "A";

    if (avg > 70 && avg <= 80)
        cout << "B";

    if (avg > 60 && avg <= 70)
        cout << "C";

    if (avg > 50 && avg <= 60)
        cout << "D";

    if (avg > 40 && avg <= 50)
        cout << "E";

    if (avg > 30 && avg <= 40)
        cout << "F : FAIL";
    return 0;
}