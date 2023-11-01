#include <iostream>
using namespace std;

int main()
{
    // AND:
    {
        cout << "\n------AND Statements------\n";
        if (true && true)
            cout << "BOTH TRUE" << endl;
        if (false && false)
            cout << "BOTH FALSE" << endl;
        if (true && false)
            cout << "TRUE && FALSE" << endl;
        if (false && true)
            cout << "FALSE && TRUE" << endl;
    }

    // OR:
    {
        cout << "\n------OR Statements-------\n";
        if (true || true)
            cout << "BOTH TRUE" << endl;
        if (false || false)
            cout << "BOTH FALSE" << endl;
        if (true || false)
            cout << "TRUE  || FALSE" << endl;
        if (false || true)
            cout << "FALSE || TRUE" << endl;
    }

    // NOT:
    {
        cout << "\n------NOT Statements------\n";
        if (true)
            cout << "TRUE" << endl;
        if (!true)
            cout << "!TRUE" << endl;
        if (false)
            cout << "FALSE" << endl;
        if (!false)
            cout << "!FALSE" << endl;
    }
    return 0;
}