/*  Write a program to calculate the net salary should take following as input
    1. Basic salary
    2. Percentage of allowance
    3. Percentage of deductions
    Net salary = (Basic salary) + (Basic salary * percentage of allowance) - (Basic salary *percentage of deductions)
 */
#include <iostream>
using namespace std;

int main()
{
    float base, allow, deduce;

    cout << "Enter the base salary : ";
    cin >> base;

    cout << "Enter the percentage allowance : ";
    cin >> allow;

    cout << "Enter the percentage deductions : ";
    cin >> deduce;

    float netSalary = base + (base * (allow / 100)) - (base * (deduce / 100));
    cout << "Net salary : " << netSalary;
    return 0;
}