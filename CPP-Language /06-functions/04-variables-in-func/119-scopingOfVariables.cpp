// CPP has block level scope

#include <iostream>
using namespace std;
int g = 10;
int main()
{
    // this is the local variable in main()
    int g = 20;
    cout << "main()          : " << g << endl;

    {
        // c++ has block level scope
        int g = 30;
        cout << "block -> main() : " << g << endl;
    }

    // ::g is used to access the global variable outside the main()
    cout << "global g ()::g) : " << ::g << endl;
    return 0;
}