#include <iostream>
using namespace std;

int main()
{
    // declaring a string in std class
    string name;
    cout << "May I know your name : ";

    // Cin only takes the string upto a whitespace
    cin >> name;
    cout << "Welcome " << name;

    cout << "May I know your name : ";
    // getline()function takes the who sentence until enter comes in
    getline(cin, name);

    cout << "Welcome " << name;
    return 0;
}