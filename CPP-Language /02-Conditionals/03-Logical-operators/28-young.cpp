#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age >= 0 && age <= 125)
    {
        // YOUNG OR NOT
        if (age >= 12 && age <= 50)
            cout << "YOUNG \n";
        else
            cout << "NOT so young \n";

        // CAN VOTE oR NOT
        if (age >= 18)
            cout << "ABLE to VOTE \n";
        else
            cout << "NOT ABLE to vote \n";
    }
    return 0;
}