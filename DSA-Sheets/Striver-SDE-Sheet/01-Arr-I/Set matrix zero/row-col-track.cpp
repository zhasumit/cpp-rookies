// take 2 markers 1 row marker and 1 col marker all initialised zero
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);

        // mark the zeros in rowMarker and colMarker
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (matrix[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }

        // iterate the matrix again and if marked make zero
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (row[i] == 1 or col[j] == 1)
                    matrix[i][j] = 0;
    }
};