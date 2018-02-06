class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        for s in set(ransomNote):
            if ransomNote.count(s) > magazine.count(s):
                return False
        return True