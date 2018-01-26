# Time:  O(n)
# Space: O(n)
class Solution:
    def anagramMappings(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        ans = dict()
        for i in range(len(B)):
            ans[B[i]] = i
        return [ans[x] for x in A]