/*
write a class for student with
1. Roll
2. Name
3. Marks in three subjects
function for
- Total marks
- Grade
- And required methods
*/
#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int roll;
    float P;
    float C;
    float M;

public:
    // parametrised constructor
    student(string naam, int kram, float phy, float chem, float maths);

    // copy constructor
    student(student &st);

    // Setter functions
    void setRoll(int kram);

    void setPhy(float phy);

    void setChem(float chem);

    void setMath(float maths);

    // Getter functions
    string getName();

    int getRoll();

    float getPhy();

    float getChem();

    float getMath();

    // Facilitators
    float total();

    float percentage();

    char grade(float avg);

    // destructors
    ~student();
};
int main()
{
    string name;
    int roll, n;
    float P, C, M;
    cout << "Enter the number of students : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "------------STUDENT " << i << "------------\n";
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks in \n";
        cout << "Physics     : ";
        cin >> P;
        cout << "Chemistry   : ";
        cin >> C;
        cout << "Mathematics : ";
        cin >> M;

        student si(name, roll, P, C, M);
        cout << "\n\nStudent Name: " << si.getName() << endl;
        cout << "Student roll: " << si.getRoll() << endl;
        cout << "Physics     : " << si.getPhy() << endl;
        cout << "Chemistry   : " << si.getChem() << endl;
        cout << "Mathematics : " << si.getMath() << "\n\n";
        cout << "Total       : " << si.total() << endl;
        cout << "Percentage  : " << si.percentage() << endl;
        cout << "Grade       : " << si.grade(si.percentage()) << "\n\n\n";
    }
    return 0;
}
// parametrised constructor
student::student(string naam, int kram, float phy, float chem, float maths)
{
    name = naam;
    setRoll(kram);
    setPhy(phy);
    setChem(chem);
    setMath(maths);
}

// copy constructor
student::student(student &st)
{
    name = st.name;
    roll = st.roll;
    P = st.P;
    C = st.C;
    M = st.M;
}

// Setter functions
void student::setRoll(int kram)
{
    if (kram > 0)
        roll = kram;
    else
    {
        cout << "Roll number cant be NEGATIVE\n";
    }
}

void student::setPhy(float phy)
{
    if (phy >= 0 && phy <= 100)
        P = phy;
    else
    {
        cout << "Number not in [0-100]\n";
        P = 100;
    }
}

void student::setChem(float chem)
{
    if (chem >= 0 && chem <= 100)
        C = chem;
    else
    {
        cout << "Number not in [0-100]\n";
        C = 100;
    }
}

void student::setMath(float maths)
{
    if (maths >= 0 && maths <= 100)
        M = maths;
    else
    {
        cout << "Number not in [0-100]\n";
        M = 100;
    }
}

// Getter functions
string student::getName()
{
    return name;
}

int student::getRoll()
{
    return roll;
}

float student::getPhy()
{
    return P;
}

float student::getChem()
{
    return C;
}

float student::getMath()
{
    return M;
}

// Facilitators
float student::total()
{
    return P + C + M;
}

float student::percentage()
{
    return ((P + C + M) / 3);
}

char student::grade(float avg)
{
    if (avg > 90 && avg <= 100)
        return '*';
    else if (avg > 80 && avg <= 90)
        return 'A';
    else if (avg > 70 && avg <= 80)
        return 'B';
    else if (avg > 60 && avg <= 70)
        return 'C';
    else if (avg > 50 && avg <= 60)
        return 'D';
    else if (avg > 40 && avg <= 50)
        return 'E';
    else if (avg >= 0 && avg <= 40)
        return 'F';
}
student::~student()
{
    cout << "Stdudent destructed \n";
}