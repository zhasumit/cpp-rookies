#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a; // b is the reference to a

    cout << "---------------------\n";
    cout << "a : " << a << "\n";
    cout << "&a : " << &a << "\n";
    cout << "b : " << b << "\n";
    cout << "&b : " << &b << "\n";
    cout << "---------------------\n";

    a++;
    cout << "a++ : " << a << "\n";
    cout << "&a : " << &a << "\n";
    cout << "b : " << b << "\n";
    cout << "&b : " << &b << "\n";
    cout << "---------------------\n";

    b++;
    cout << "a : " << a << "\n";
    cout << "&a : " << &a << "\n";
    cout << "b++ : " << b << "\n";
    cout << "&b : " << &b << "\n";
    cout << "---------------------\n";

    a--;
    cout << "a-- : " << a << "\n";
    cout << "&a : " << &a << "\n";
    cout << "b : " << b << "\n";
    cout << "&b : " << &b << "\n";
    cout << "---------------------\n";

    b--;
    cout << "a : " << a << "\n";
    cout << "&a : " << &a << "\n";
    cout << "b-- : " << b << "\n";
    cout << "&b : " << &b << "\n";
    cout << "---------------------\n";

    // reference is the alias name given to a variable
    // reference have the same memory location as that of assigned variable
    // reference cant be left uninitialised once declared

    int c = 50;
    // int &d; uninitialised reference gives ERROR
    // int &b=c; once a reference is initialised it cant be reinitialised to another variable

    return 0;
}