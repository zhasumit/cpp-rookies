#include <iostream>
using namespace std;

int main()
{
    int product = 1, sum = 0, a = 10, b = 5, c = 15;
    sum += a + b + c;
    cout << sum;
    product *= a * b * c;
    cout << product;

    sum += a;
    cout << "Sum : \n"
         << sum << endl;
    sum += b;
    cout << sum << endl;
    sum += c;
    cout << sum;
    cout << sum << endl;

    product *= a;
    cout << "Product : \n"
         << product << endl;
    product *= b;
    cout << product << endl;
    product *= c;
    cout << product << endl;

    return 0;
}