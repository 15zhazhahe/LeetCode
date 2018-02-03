class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) == 0:
            return 0
        ans, mi = 0, prices[0]
        for price in prices:
            if price < mi:
                mi = price
            ans = max(ans, price - mi)
        return ans