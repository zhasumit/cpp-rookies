#include <iostream>
using namespace std;
int main()
{
    int a[] = {7, 2, 4, 6, 8, 10};
    int *p = a;
    cout << "*a   : " << *a << endl;
    cout << "a    : " << a << endl;
    cout << "&a   : " << &a << endl;
    cout << "*p   : " << *p << endl;
    cout << "p    : " << p << endl;
    cout << "&p   : " << &p << endl;

    p = a;
    // Operation A: p++
    cout << "--------------------------------\n";
    for (auto x : a)
    {
        p++;
        cout << "p++  : " << *p << endl;
        cout << "p++  : " << p << "\n\n";
    }

    // Operation B: p--
    cout << "--------------------------------\n";
    for (auto x : a)
    {
        p--;
        cout << "p--  : " << *p << endl;
        cout << "p--  : " << p << "\n\n";
    }

    p = a;
    // Operation C: p+n
    {
        cout << "--------------------------------\n";
        int n;
        cout << "Enter the # of loc to move RIGHT: ";
        cin >> n;
        p = p + n;
        cout << "p+" << n << " : " << *p << endl;
        cout << "p+" << n << " : " << p << "\n\n";
    }

    p = a;
    // Operation D: p+n
    {
        cout << "--------------------------------\n";
        int n;
        cout << "Enter the # of loc to move LEFT: ";
        cin >> n;
        p = p - n;
        cout << "p-" << n << " : " << *p << endl;
        cout << "p-" << n << " : " << p << "\n\n";
    }

    // Operation E: p-q and p+q
    {
        // p-q
        p = a;
        int *q = &a[3];
        cout << "--------------------------------\n";
        int d = p - q;
        cout << "*p   : " << *p << endl;
        cout << "p    : " << p << endl;
        cout << "*q   : " << *q << endl;
        cout << "q    : " << q << endl;
        cout << "p-q  : " << d << "\n\n";

        // q-p
        p = a;
        q = &a[3];
        d = q - p;
        cout << "*q   : " << *q << endl;
        cout << "q    : " << q << endl;
        cout << "*p   : " << *p << endl;
        cout << "p    : " << p << endl;
        cout << "q-p  : " << d << "\n\n";
    }
    cout << "--------------------------------\n";

    return 0;
}