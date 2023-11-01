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
    if (avg >= 60)
        cout << "A";
    else if (avg >= 32 && avg < 60)
        cout << "B";
    else if (avg < 35)
        cout << "C";
    return 0;
}