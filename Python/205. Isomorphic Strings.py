class Solution:
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        vis1 = dict()
        vis2 = dict()
        for i in range(len(s)):
            if vis1.get(s[i]) != vis2.get(t[i]):
                return False
            vis1[s[i]] = i+1
            vis2[t[i]] = i+1
        return True