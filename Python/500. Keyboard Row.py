# Time: O(n*m) 
class Solution:
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        key = ['qwertyuiop', 'asdfghjkl', 'zxcvbnm']
        ans = list()
        for word in words:
            k = [1, 1, 1]
            for s in word:
                for i in range(len(key)):
                    if s.lower() in key[i]:
                        k[i] = 0
            if k[0] + k[1] + k[2] == 2:
                ans.append(word)
        return ans