#include <bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A)
{
    long long n = A.size();
    int xr = 0;
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ A[i];  // for xoring with element in arr
        xr = xr ^ i + 1; // for xor with natural number
    }

    // find the last uncommon bit for differentitating elements
    int bitNo = 0;
    while (true)
    {
        if (xr & (1 << bitNo) != 0)
            break;
        bitNo++;
    }

    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        // putting element in clubbing
        if (A[i] & (1 << bitNo))
            ones = ones ^ A[i];
        else
            zeros = zeros ^ A[i];

        // putting Number in clubbing
        if ((i + 1) & (1 << bitNo))
            ones = ones ^ (i + 1);
        else
            zeros = zeros ^ (i + 1);
    }

    // confirm which is repeating and which is missing
    int cnt = 0;
    for (auto itr : A)
        if (itr == zeros)
            cnt++;

    if (cnt == 2)
        return {zeros, ones};
    return {ones, zeros};
}
