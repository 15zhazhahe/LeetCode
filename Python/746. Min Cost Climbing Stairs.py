class Solution:
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        dp = list()
        dp.append(cost[0])
        dp.append(cost[1])
        for i in range(2,len(cost)):
            dp.append(min(dp[i-1],dp[i-2])+cost[i])
        return min(dp[-1], dp[-2])