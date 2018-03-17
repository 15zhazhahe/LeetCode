class Solution:
    def largestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        from functools import cmp_to_key
        key = cmp_to_key(lambda x,y: int(x+y)-int(y+x))
        tmp = [str(num) for num in nums]
        tmp.sort(key=key, reverse=True)
        ans = ''.join(tmp)
        if tmp[0] == '0':
            return "0"
        return ans