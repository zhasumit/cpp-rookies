#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
    long long curr = 1;
    vector<int> ans;
    ans.push_back(curr);
    for (int col = 1; col < row; col++)
    {
        curr = curr * (row - col);
        curr = curr / col;
        ans.push_back(curr);
    }
    return ans;
}

vector<vector<int>> pascalsTriangle(int N)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= N; i++)
        ans.push_back(generateRow(i));
    return ans;
}

void printArr(vector<vector<int>> arr)
{
    for (auto i : arr)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}
int main()
{
    printArr(pascalsTriangle(6));
    return 0;
}