#include <iostream>
using namespace std;

int main()
{
    char x = 127, y = -128;

    cout << "x : " << (int)x << "\n++x: " << (int)++x;
    cout << endl
         << "y : " << (int)y << "\n--y: " << (int)--y;
    return 0;
}