#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int RegNo;
    static int counter;
    student(string name)
    {
        counter++;
        RegNo = counter;
        this->name = name;
    }
    void show()
    {
        cout << "\nName  : " << name;
        cout << "\nRegNo : " << RegNo << endl;
    }
};
int student::counter = 0;
int main()
{
    int n;
    string name;
    cout << "Enter the number of students to be entered : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " : Name : ";
        cin >> name;
        student si(name);
        si.show();
    }
    return 0;
}