/* write aclass for employee derived class
a. FULLTIME employee with salary
b. part time employee with daily wages
Write required methods*/

#include <iostream>
using namespace std;

class employee
{
private:
    int eID;
    string name;
    float hours;

public:
    employee(int eID, string name, float hours = 0)
    {
        this->eID = eID;
        this->name = name;
        this->hours = hours;
    }

    int geteID() { return eID; }
    float getehours() { return hours; }
    string getName() { return name; }
};

class fullTimeEmployee : public employee
{
private:
    float salary;

public:
    fullTimeEmployee(int eID, string name, float sal, float hours = 0) : employee(eID, name, hours)
    {
        this->salary = sal;
        appreciation(sal);
    }
    void appreciation(float hr)
    {
        if (hr > 240 && hr < 400)
            this->salary = salary + (.15 * salary);
        if (hr > 400)
            this->salary = salary + (.25 * salary);
    }
    float getSalary() { return salary; }
};

class partTimeEmployee : public employee
{
private:
    float wage;

public:
    partTimeEmployee(int eID, string name, float wage, float hours = 0) : employee(eID, name, hours)
    {
        this->wage = wage;
        appreciation(wage);
    }
    void appreciation(float hr)
    {
        if (hr > 10 && hr < 13)
            this->wage = wage + (.12 * wage);
        if (hr > 13)
            this->wage = wage + (.20 * wage);
    }
    float getWage() { return wage; }
};

int main()
{
    int ID;
    string name;
    float wage, hours, salary;
    cout << "Enter Full time Employee ID : ";
    cin >> ID;
    cout << "Enter the name of FULL time employee : ";
    cin >> name;
    cout << "Enter Office hours : ";
    cin >> hours;
    cout << "Enter salary : ";
    cin >> salary;
    fullTimeEmployee F(ID, name, salary, hours);

    cout << "Enter Part time Employee ID : ";
    cin >> ID;
    cout << "Enter the name of PART time employee : ";
    cin >> name;
    cout << "Enter Office hours : ";
    cin >> hours;
    cout << "Enter daily wages : ";
    cin >> wage;
    partTimeEmployee P(ID, name, wage, hours);

    cout << "\n---------FULL-TIME Employee----------\n";
    cout << "Name        : " << F.getName() << endl;
    cout << "Employee ID : " << F.geteID() << endl;
    cout << "Hours       : " << F.getehours() << endl;
    cout << "Salary      : " << F.getSalary() << endl;

    cout << "\n---------PART-TIME Employee----------\n";
    cout << "Name        : " << P.getName() << endl;
    cout << "Employee ID : " << P.geteID() << endl;
    cout << "Hours       : " << P.getehours() << endl;
    cout << "Salary      : " << P.getWage() << endl;
}