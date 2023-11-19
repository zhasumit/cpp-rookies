#include <bits/stdc++.h>
using namespace std;
vector<int> repeatedNumber(const vector<int> &A)
{
    int n = A.size();
    int hash[n + 1] = {0};
    for (auto itr : A)
        hash[itr]++;

    int missing = -1, repeating = -1;
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
            repeating = i;
        else if (hash[i] == 0)
            missing = i;
        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
}
