# Time: O(r*c)
class Solution:
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        R = len(nums)
        C = len(nums[0])
        ans = list()
        if R*C == r*c:
            tmp = list()
            cnt = 0
            for i in range(R):
                for j in range(C):
                    tmp.append(nums[i][j])
                    cnt += 1
                    if cnt == c:
                        cnt = 0
                        ans.append(tmp)
                        tmp = list()
            return ans
        else:
            return nums