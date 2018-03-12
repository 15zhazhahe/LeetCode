class Solution:
    def dailyTemperatures(self, temperatures):
        """
        :type temperatures: List[int]
        :rtype: List[int]
        """
        s = list()
        ans = [0] * len(temperatures)
        for i in range(len(temperatures)):
            while len(s) != 0 and s[-1][1] < temperatures[i]:
                ans[s[-1][0]] = i- s[-1][0]
                s.pop()
            s.append([i, temperatures[i]])
        return ans