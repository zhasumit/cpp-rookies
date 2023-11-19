#include <bits/stdc++.h>
using namespace std;

// Here n-1 and m-1 are taken as parameter since nums1 contains everything
// if a new arr is to be created then the i = 0 and j = 0
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 and j >= 0)
        {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        // now any one of the arrays are left to be non-empty
        while (i >= 0)
            nums1[k--] = nums1[i--];
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};