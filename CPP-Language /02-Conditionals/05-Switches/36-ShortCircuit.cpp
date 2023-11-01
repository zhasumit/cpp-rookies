#include <iostream>
using namespace std;

int main()
{
    int a = 15, b = 10, c = 5;
    cout << "SHORT CIRCUTING\nPreIncrement is done in second part";
    // AND short circuit:
    {
        cout << "\n------------------------------\n";
        cout << "AND (&&) \n";
        cout << "C   : " << c << endl;
        if (a < b && ++c < b)
            ; // F=> no ++c is done
        cout << "False && True\t =>";
        cout << "++C : " << c << "\n\n";

        cout << "C   : " << c << endl;
        if (a > b && ++c < b)
            ; // T=> ++c is done
        cout << "True && False\t =>";
        cout << "++C : " << c;
        cout << "\n------------------------------\n";
    }

    // OR short circuit:
    {
        cout << "\n------------------------------\n";
        cout << "OR (||) \n";
        cout << "C   : " << c << endl;
        if (a > b || ++c < b)
            ; // T=> no ++c is done
        cout << "True || False\t =>";
        cout << "++C : " << c << "\n\n";

        cout << "C   : " << c << endl;
        if (a < b || ++c < b)
            ; // F=> ++c is done
        cout << "False || True\t =>";
        cout << "++C : " << c;
        cout << "\n------------------------------\n";
    }
    return 0;
}