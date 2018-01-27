# Time: O(nm) 
class Solution:
    def judge(self, x):
        ss = str(x)
        for s in ss:
            if s=='0' or x % int(s) != 0:
                return False
        return True

    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        ans = list()
        for i in range(left, right+1):
            if self.judge(i):
                ans.append(i)
        return ans