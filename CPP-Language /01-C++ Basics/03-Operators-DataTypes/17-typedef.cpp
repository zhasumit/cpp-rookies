#include <iostream>
using namespace std;

// typedef is used to give the alias name to the parts or code snippets
typedef int marks;
typedef int rollNo;

int main()
{
    // marks are the integer type of data but using marks makes the purpose of declaration clear
    marks m1, m2, m3;
    // similarly rollNo is int datatype used to store the roll number of students
    rollNo r1, r2, r3;

    cout << "Enter the roll number of students : ";
    cin >> r1 >> r2 >> r3;

    cout << "Enter the marks of the students   : ";
    cin >> m1 >> m2 >> m3;

    cout << "Student 1 : \n\tRoll No : " << r1 << "\n\tmarks   : " << m1 << endl;
    cout << "Student 2 : \n\tRoll No : " << r2 << "\n\tmarks   : " << m2 << endl;
    cout << "Student 3 : \n\tRoll No : " << r3 << "\n\tmarks   : " << m3 << endl;
    return 0;
}