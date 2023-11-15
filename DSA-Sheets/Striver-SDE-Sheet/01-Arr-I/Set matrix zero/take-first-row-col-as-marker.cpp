#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1; // intersection point

        // 0th row and col acts as the marker
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (matrix[i][j] == 0)
                {
                    // mark the i-th row
                    matrix[i][0] = 0;
                    // mark the j-th col
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }

        // mark everythng other than markers
        // 0th row and col acts as the marker => start from 1
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                if (matrix[i][j] != 0)
                    // check the markers and make zero
                    if (matrix[0][j] == 0 or matrix[i][0] == 0)
                        matrix[i][j] = 0;

        // for the first row and col since they were markers
        // [0][0] was for the first row
        if (matrix[0][0] == 0)
            for (int j = 0; j < m; j++)
                matrix[0][j] = 0;

        // col0 was marker for the intersection and first col
        if (col0 == 0)
            for (int i = 0; i < n; i++)
                matrix[i][0] = 0;
    }
};