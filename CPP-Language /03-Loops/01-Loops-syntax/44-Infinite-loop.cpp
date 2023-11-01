#include <iostream>
using namespace std;

int main()
{
    // ==============================================================
    // ---------------WHILE---------------
    while (true) // condition always true
        cout << "Hi \n";

    int i = 1;
    while (i > 0) // conditions never False
    {
        cout << i << " Hi \n";
        i++;
    }

    int i = 1;
    while (i < 10) // conditions never False
    {
        cout << i << " Hi \n";
        // NO updation so i always is less than 10 => always true
    }

    // ==============================================================
    // ---------------DO WHILE---------------
    do
    {
        cout << "Hi \n";
    } while (true); // condition always true

    i = 1;
    do
    {
        cout << i << " Hi \n";
        i++;
    } while (i > 0); // conditions never False

    int i = 1;
    do
    {
        cout << i << " Hi \n";
        // NO updation so i always is less than 10 => always true
    } while (i < 10); // conditions never False

    // ==============================================================
    // ---------------FOR---------------

    for (i = 1; true; i++)
    {
        cout << "Hi \n";
    } // condition always true

    for (i = 1; i > 0; i++)
    {
        cout << "Hi \n";
    } // conditions never False

    // NO updation so i always is less than 10 => always true
    for (i = 1; i < 10;)
    {
        cout << "Hi \n";
    } // conditions never False

    for (;;) // no initialisation , updation or updation
        cout << "Hi \n";
    return 0;
}