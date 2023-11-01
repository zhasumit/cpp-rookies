#include <iostream>
#include <math.h>
using namespace std;

// t is the template class
template <class t>
t max(t a, t b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "max(a,b) : " << max(5, 65) << endl;
    cout << "max(a,b) : " << max(5.0f, 6.5f) << endl;
    cout << "max(a,b) : " << max('A', 'B') << endl;
    cout << "max(a,b) : " << max(85.0245, 73.695458) << endl;
    return 0;
}