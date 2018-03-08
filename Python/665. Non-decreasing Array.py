class Solution:
    def checkPossibility(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        ans = float('inf')
        for i in range(len(nums) - 1):
            if nums[i] > nums[i+1]:
                if ans != float('inf'):
                    return False
                ans = i
        if ans == float('inf') or ans == 0:
            return True
        if ans == len(nums) - 2 or nums[ans-1] <= nums[ans+1]:
            return True
        if nums[ans] <= nums[ans+2]:
            return True
        return False
