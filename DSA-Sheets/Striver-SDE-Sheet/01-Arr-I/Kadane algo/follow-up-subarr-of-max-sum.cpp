#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0, max = nums[0];
        int ansStart = -1, ansEnd = -1;
        int start;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum == 0)
                start = i;
            if (max < sum)
            {
                max = sum;
                ansStart = start;
                ansEnd = i;
            }
            if (sum < 0)
                sum = 0;
        }
        return max;
    }
};