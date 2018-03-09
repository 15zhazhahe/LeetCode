class Solution:
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        :description: nums1是nums2的子集，对于nums1里的每个数，
                      要求找到在nums2的位置，且求出在nums2后面里
                      那个紧接着比他大的数字
        :idea: 直接对nums2本身的数组做预处理，用dict存好当前这个数，后面
               紧接着比他大的数字
        """
        ans = list()
        tmp, maple = list(), dict()
        for num in nums2:
            while len(tmp) > 0 and tmp[-1] < num:
                maple[tmp[-1]] = num
                tmp.pop()
            tmp.append(num)
        for num in nums1:
            ans.append(maple.get(num, -1))
        return ans