class Solution:
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = list()
        res, cnt = 1, 0
        for num in nums:
            if num == 0:
                cnt += 1
            else:
                res *= num
        for i in range(len(nums)):
            if cnt >= 2:
                ans.append(0)
            elif cnt == 1:
                if nums[i] == 0:
                    ans.append(res)
                else:
                    ans.append(0)
            else:
                ans.append(res // nums[i])
        return ans