class Solution:
    def findPairs(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if k < 0:
            return 0
        maple = dict()
        for num in nums:
            maple[num] = maple.get(num, 0) + 1
        ans = 0
        for num in maple:
            if k == 0 and maple[num] > 1:
                ans += 1
            elif k != 0:
                tmp = num + k
                if maple.get(tmp) != None:
                    ans += 1
        return ans