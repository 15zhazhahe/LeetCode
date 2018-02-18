class Solution:
    def letterCasePermutation(self, S):
        """
        :type S: str
        :rtype: List[str]
        """
        ans = ['']
        for ch in S:
            if ch.isalpha():
                ans = [i + j for i in ans for j in [ch.upper(), ch.lower()]]
            else:
                ans = [i + ch for i in ans]
        return ans