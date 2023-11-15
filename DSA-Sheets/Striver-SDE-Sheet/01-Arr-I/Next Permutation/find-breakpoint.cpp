// find the elements i and i+1 st there are breakpoints and the elements can be rearranged
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int breakPt = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--)
            if (nums[i] < nums[i + 1])
            {
                breakPt = i;
                break;
            }

        // if no breakPt was found => return reverse
        if (breakPt == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // find the first greater element and swap
        for (int i = n - 1; i >= breakPt; i--)
        {
            if (nums[i] > nums[breakPt])
            {
                swap(nums[i], nums[breakPt]);
                break;
            }
        }

        // reverse the reamaining from the breakpt - end
        reverse(nums.begin() + breakPt + 1, nums.end());
    }
};