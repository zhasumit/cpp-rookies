#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<vector<int>> rotated(n, vector<int>(n, 0));
        // simply map row to coloumn
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                rotated[j][n - i - 1] = matrix[i][j];
        matrix = rotated;
    }
};

// time  O(n2)
// space  O(n2)