class Solution:
    def numRabbits(self, answers):
        """
        :type answers: List[int]
        :rtype: int
        """
        maple = dict()
        ans = 0
        for a in answers:
            if a == 0:
                ans += 1
            else:
                maple[a] = maple.get(a, 0) + 1
        for k in maple:
            if maple[k] <= k+1:
                ans += k + 1
            else:
                ans += (maple[k] // (k+1)) * (k + 1)
                if maple[k] % (k + 1) != 0:
                    ans += k + 1
        return ans