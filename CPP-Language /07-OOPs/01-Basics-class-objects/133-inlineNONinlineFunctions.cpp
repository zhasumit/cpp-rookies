// inline functions are the functions that expands at the function call
#include <iostream>
using namespace std;
class test
{
public:
    void Fun1()
    {
        cout << "INLINE\n";
    }
    void Fun2();
    inline void Fun3();
};
int main()
{
    test *ptr;
    ptr->Fun1(); // INLINE function
    ptr->Fun2(); // NON-Inline function
    ptr->Fun3(); // INLINE function due to inline keyword in front of Fun3

    delete ptr;
    ptr = nullptr;

    return 0;
}
void test::Fun2()
{
    cout << "NON-Inline\n";
}
void test::Fun3()
{
    cout << "INLINE\n";
}