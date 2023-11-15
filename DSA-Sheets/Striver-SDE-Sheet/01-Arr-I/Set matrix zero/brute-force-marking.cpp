#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void markRow(int row, vector<vector<int>> &arr)
    {
        int m = arr[0].size();
        // since the row is constant => traversing col
        // iterate the cols and make -999
        for (int j = 0; j < m; j++)
            if (arr[row][j] != 0)
                arr[row][j] = -999;
    }
    void markCol(int col, vector<vector<int>> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
            if (arr[i][col] != 0)
                arr[i][col] = -999;
    }

    void markZero(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j] == -999)
                    arr[i][j] = 0;
    }

public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    markRow(i, matrix);
                    markCol(j, matrix);
                }
            }
        }
        markZero(matrix);
    }
};

// O(n3)
// since we go around again to mark the things as zero