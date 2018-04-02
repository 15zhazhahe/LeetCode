class Solution:
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str
        """
        tmp = path.split('/')
        ans = list()
        for name in tmp:
            if name == '..':
                if len(ans) > 0:
                    ans.pop()
            elif name == '.':
                continue
            elif name != '':
                ans.append(name)
        if len(ans) == 0:
            return '/'
        ans = '/'.join(ans)
        return '/' + ans
                