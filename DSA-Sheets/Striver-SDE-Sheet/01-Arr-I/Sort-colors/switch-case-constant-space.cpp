#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int z = 0, o = 0, t = 0;
        for (int num : nums)
        {
            switch (num)
            {
            case 0:
                z++;
                break;
            case 1:
                o++;
                break;
            case 2:
                t++;
                break;
            }
        }
        int i = 0;
        while (z--)
            nums[i++] = 0;
        while (o--)
            nums[i++] = 1;
        while (t--)
            nums[i++] = 2;
    }
};