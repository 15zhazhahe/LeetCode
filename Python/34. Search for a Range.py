class Solution:
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        def search(nums, x):
            l, r = 0, len(nums)-1
            while l <= r:
                mid = (r - l ) // 2 + l;
                if nums[mid] >= x:
                    r = mid-1
                else:
                    l = mid+1
            return l
        l = search(nums, target)
        r = search(nums, target+1) - 1
        if l >= len(nums) or nums[l] != target:
            return [-1, -1]
        return [l, r]
            