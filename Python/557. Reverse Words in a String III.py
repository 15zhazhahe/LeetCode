# Time:  O(n)
# Space: O(n)
class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        ans = s.split(' ')
        for i in range(len(ans)):
            ans[i] = ans[i][::-1]
        ans = ' '.join(ans)
        return ans
             