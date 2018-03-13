class Solution:
    def customSortString(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: str
        """
        maple = dict()
        vis, cnt = [25]*26, 0
        tt = [0]*26
        for c in S:
            vis[ord(c) - ord('a')] = cnt
            cnt += 1
        for c in T:
            tmp = vis[ord(c) - ord('a')]
            if tt[tmp] == 0:
                tt[tmp] = c
            else:
                tt[vis[ord(c) - ord('a')]] += c
        ans = ''
        for i in range(26):
            tmp = tt[i]
            if tt[i] != 0:
                ans += ''.join(tt[i])
        return ans
            