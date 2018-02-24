class Solution:
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans1 = ans2 = ans3 = float('-inf')
        for num in nums:
            if ans1 == num or ans2 == num:
                continue
            if ans3 == num:
                continue
            if ans1 < num:
                ans3 = ans2
                ans2 = ans1
                ans1 = num
            elif ans2 < num:
                ans3 = ans2
                ans2 = num
            elif ans3 < num:
                ans3 = num
        return ans1 if ans3 == float('-inf') else ans3