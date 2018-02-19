class Solution:
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """
        l, i = 0, 0
        while l < len(chars):
            c, cnt = chars[l], 1
            while l < len(chars) - 1 and chars[l] == chars[l+1]:
                cnt, l = cnt + 1, l + 1
            chars[i] = c
            if cnt > 1:
                tmp = str(cnt)
                chars[i + 1:i + 1 + len(tmp)] = tmp
                i += len(tmp)
            l, i = l + 1, i + 1
        return i