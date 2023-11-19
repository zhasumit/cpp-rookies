#include <bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A)
{
    long long n = A.size();
    // S - Sn = r - m           Taken as val1
    // S2 - S2n = (r-m)(r+m)    Taken as val2
    long long Sn = (n * (n + 1)) / 2;
    long long S2n = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0, S2 = 0;
    for (auto a : A)
    {
        S += a;
        S2 += (long long)(a) * (long long)(a);
    }
    long long val1 = S - Sn;     // r - m
    long long val2 = S2 - S2n;   // used to take r+m = val2/r-m => r+m = val2 / val2
    long long rPm = val2 / val1; // r + m

    // r + m + r - m = val2 + val1 => 2r = val1 + val2 => r = (val1 + val2) / 2
    long long r = (rPm + val1) / 2;
    long long m = (r - val1);

    return {(int)r, (int)m};
}
