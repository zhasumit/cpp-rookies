#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // iterate the entire list of prices
        // if the last price is smaller -> profit is made
        // add the whatsoever profit is obtained to the net profit

        int net_profit = 0;
        for (int i = 1; i < prices.size(); i++)
            if (prices[i] > prices[i - 1])
                net_profit += prices[i] - prices[i - 1];
        return net_profit;
    }
};