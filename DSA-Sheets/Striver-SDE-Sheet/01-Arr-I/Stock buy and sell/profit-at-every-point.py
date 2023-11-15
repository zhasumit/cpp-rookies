class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        net_profit = 0
        for i in range(len(prices)-1):
            if prices[i] < prices[i+1]:
                net_profit += (prices[i+1] - prices[i])
        return net_profit
    