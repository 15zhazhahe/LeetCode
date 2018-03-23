class Solution:

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.nums = nums
        

    def pick(self, target):
        """
        :type target: int
        :rtype: int
        """
        cnt, ans = 0, 0
        for i in range(len(self.nums)):
            if target != self.nums[i]:
                continue
            cnt += 1
            if cnt == 1:
                ans = i
            elif random.randint(1, cnt) == cnt:
                    ans = i
        return ans


# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.pick(target)