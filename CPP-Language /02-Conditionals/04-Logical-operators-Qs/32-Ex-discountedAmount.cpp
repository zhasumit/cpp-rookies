#include <iostream>
using namespace std;

int main()
{
    float discount, bill;
    cout << "Enter the discount percentage  : ";
    cin >> discount;
    discount /= 100;

    cout << "Enter the total billing amount : Rs ";
    cin >> bill;

    float discounted = (bill * discount);
    float billable = bill - discounted;

    cout << "Discountable amount : Rs " << discounted << endl;
    cout << "Billable amount     : Rs " << billable << endl;
    return 0;
}