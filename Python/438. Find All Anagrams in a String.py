class Solution:
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        vis1 = [0]*26
        vis2 = [0]*26
        if len(p) > len(s):
            return []
        for i in range(len(p)):
            vis1[ord(p[i]) - ord('a')] += 1
            vis2[ord(s[i]) - ord('a')] += 1
        ans = list()
        if vis1 == vis2:
            ans.append(0)
        for i in range(len(p), len(s)):
            
            vis2[ord(s[i]) - ord('a')] += 1
            vis2[ord(s[i - len(p)]) - ord('a')] -= 1
            if vis1 == vis2:
                ans.append(i - len(p) + 1)
        return ans