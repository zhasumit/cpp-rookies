#include <bits/stdc++.h>
using namespace std;
void printN1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printN1(--n);
}

void print1N(int n)
{
    if (n == 0)
        return;
    print1N(--n);
    cout << n + 1 << endl;
}

int main()
{
    int n;
    cin >> n;
    cout << "1 -> N\n";
    print1N(n);

    cout << "\nN -> 1\n";
    printN1(n);
    return 0;
}