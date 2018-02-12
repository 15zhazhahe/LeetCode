class Solution:
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        tmp = str.split(' ')
        key = dict()
        value = dict()
        if len(pattern) != len(tmp):
            return False
        for i in range(len(pattern)):
            if key.get(tmp[i]) is None:
                if value.get(pattern[i]) is None:
                    key[tmp[i]] = pattern[i]
                    value[pattern[i]] = tmp[i]
                else:
                    return False
            elif key[tmp[i]] != pattern[i]:
                return False
        return True