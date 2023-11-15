// n rows ==> n elements

// Every element in the coloumn is given by (n-1) C (r-1)

#include <bits/stdc++.h>
using namespace std;

// ===========================================================

int nCr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void nthRow(int n)
{
    vector<int> ans;
    for (int col = 1; col <= n; col++)
        cout << nCr(n - 1, col - 1) << " ";
    cout << endl;
}

// ===========================================================

void NthRow(int n)
{
    int ans = 1;
    cout << ans << " ";
    for (int i = 1; i < n; i++)
    {
        ans *= (n - i);
        ans /= i;
        cout << ans << " ";
    }
    cout << endl;
}

// ===========================================================
int main()
{
    nthRow(5);
    NthRow(5);
}