class Solution1:
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        ans = ''
        for i in range(0,len(s), 2*k):
            l = min(i+k,len(s))
            r = min(i+2*k,len(s))
            ans += s[i:l][::-1] + s[l:r]
        return ans

class Solution2:
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        s = ' ' + s
        n = len(s)
        tmp = ''
        ans = ''
        i, flag = 1, -1
        while i < n:
            tmp += s[i]
            if i % k == 0:
                ans += tmp[::flag]
                tmp = ''
                flag = -flag
            i += 1
        if len(ans) < n:
            if flag == 1:
                ans += s[len(ans)+1:]
            else:
                ans += s[:len(ans):-1]
        return ans
