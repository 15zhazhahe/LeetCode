class Solution:
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        tmp = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        ans = dict()
        for word in words:
            s = list()
            for c in word:
                s.append(tmp[ord(c) - ord('a')])
            ans[''.join(s)] = 1
        return len(ans)
            