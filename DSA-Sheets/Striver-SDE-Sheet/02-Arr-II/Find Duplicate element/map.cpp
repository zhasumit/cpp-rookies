#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (auto num : nums)
            m[num]++;
        for (auto itr : m)
            if (itr.second > 1)
                return itr.first;
        return -1;
    }
};