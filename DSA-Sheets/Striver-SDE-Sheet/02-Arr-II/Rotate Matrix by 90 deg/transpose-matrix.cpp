#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // Transpose the matrix
        // O(n/2) x O(n/2) runs
        // diagonal dont change
        int n = matrix.size();
        for (int i = 0; i < n - 1; i++)
            for (int j = i; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);

        // O(n x n/2) for traversal and reversing
        // Reverse every row of the matrix
        for (int i = 0; i < n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};