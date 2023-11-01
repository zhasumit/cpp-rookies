#include <iostream>
using namespace std;

// using factorial
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n, ans = 1;
    cout << "Enter the number : ";
    cin >> n;
    // using loops
    for (int i = n; i >= 2; i--)
        ans *= i;
    cout << "LOOPS:     Factorial : " << ans << endl;
    ans = fact(n);
    cout << "RECURSION: Factorial : " << ans << endl;
    return 0;
}