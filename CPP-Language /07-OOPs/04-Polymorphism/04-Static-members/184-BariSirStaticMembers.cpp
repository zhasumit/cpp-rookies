// Example of Static
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }
    void display()
    {
        cout << "Name " << name << "\nRoll " << roll << endl;
    }
};
int Student::addNo = 0;
int main()
{
    Student s1("John");
    s1.display();
    Student s2("Ravi");
    s2.display();
    Student s3("Khan");
    s3.display();
    Student s4("Khan");
    s4.display();
    Student s5("Khan");
    s5.display();
    Student s6("Khan");
    s6.display();

    cout << "Number Admission " << Student::addNo << endl;
}