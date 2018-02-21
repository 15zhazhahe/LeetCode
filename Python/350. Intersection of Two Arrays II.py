class Solution:
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        maple = dict()
        ans = list()
        for num in nums1:
            if maple.get(num) == None:
                maple[num] = 1
            else:
                maple[num] += 1
        for num in nums2:
            if maple.get(num) != None:
                if maple[num] >= 1:
                    ans.append(num)
                    maple[num] -= 1
        return ans