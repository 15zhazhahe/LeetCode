class Solution:
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        maple = dict()
        for i in range(len(nums)):
            if i > k:
                del maple[nums[i - k - 1]]
            if maple.get(nums[i]) != None:
                return True
            maple[nums[i]] = 1
        return False