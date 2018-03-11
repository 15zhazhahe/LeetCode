class Solution:
    def longestWord(self, words):
        """
        :type words: List[str]
        :rtype: str
        """
        words.sort()
        s, ans = set(), ''
        for word in words:
            if len(word) == 1 or word[:-1] in s:
                s.add(word)
                if len(word) > len(ans):
                    ans = word
        return ans