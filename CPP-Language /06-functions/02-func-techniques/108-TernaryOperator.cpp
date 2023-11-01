#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter two numbers : ";
    cin >> x >> y >> z;

    // (condition?true:false) TERNARY OPERATOR
    // ex check the greater among x,y
    cout << "max(x, y) : " << (x > y) ? x : y;

    // ex check the greater among x,z
    cout << "max(x, z) : " << (x > z) ? x : z;

    // ex check the greater among y,z
    cout << "max(y, z) : " << (y > z) ? y : z;

    // check the greatest amongst all x,y,z
    cout << "max(x, y, z) : " << (x > y && x > z) ? x : (y > z ? y : z);

    (x > y && x > z) ? x : (y > z ? y : z);
    // True     T ---->*
    // T        F---------->*
    // F        T---------->*
    //----False-----          T---->*
    //----False-----          F-------->*
    return 0;
}