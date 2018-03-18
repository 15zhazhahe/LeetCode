class Solution:
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        ans = [1]
        i2, i3, i5 = 0, 0, 0
        for i in range(1,n):
            ans.append(min(ans[i2]*2, ans[i3]*3, ans[i5]*5));
            if ans[i] == 2*ans[i2]:
                i2 += 1
            if ans[i] == 3*ans[i3]:
                i3 += 1
            if ans[i] == 5*ans[i5]:
                i5 += 1
        return ans[n-1]