class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        maple = dict()
        ans = list()
        for i in range(len(nums)):
            tmp = target - nums[i]
            if maple.get(tmp) != None:
                ans.append(maple[tmp])
                ans.append(i)
            maple[nums[i]] = i
        return ans