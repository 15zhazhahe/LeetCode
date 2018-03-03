class Solution:
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        ans = "1"
        while n > 1:
            cnt, tmp = 0, ""
            p = ans[0]
            for c in ans:
                if c == p:
                    cnt += 1
                else:
                    tmp += str(cnt) + p
                    p = c
                    cnt = 1
            tmp += str(cnt) + p
            ans = tmp
            n -= 1
        return ans
