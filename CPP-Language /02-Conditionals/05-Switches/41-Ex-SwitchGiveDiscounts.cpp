#include <iostream>
using namespace std;

int main()
{
    float bill;
    cout << "Enter the total bill : ";
    cin >> bill;
    if (bill < 100)
        cout << "NO Discounts ";
    else if (bill >= 100 && bill <= 500)
    {
        float billable = (bill - (.1 * bill));
        cout << "10 percent discounts\n";
        cout << "Discounted : Rs " << (.1 * bill) << "\n";
        cout << "Billable amount : Rs " << billable;
    }
    else if (bill > 500)
    {
        float billable = (bill - (.2 * bill));
        cout << "20 percent discounts\n";
        cout << "Discounted : Rs " << (.2 * bill) << "\n";
        cout << "Billable amount : Rs " << billable;
    }
    return 0;
}