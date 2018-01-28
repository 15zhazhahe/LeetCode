# Time: O(n)
class Solution:
    def calPoints(self, ops):
        """
        :type ops: List[str]
        :rtype: int
        """
        ans = 0
        scores = list()
        for op in ops:
            score, flag = 0, 1
            if op == 'C':
                ans -= scores.pop()
                flag = 0
            elif op == 'D':
                score = 2*scores[-1]
                ans += score                
            elif op == '+':
                score = scores[-1] + scores[-2]
                ans += score
            else:
                score = int(op)
                ans += score
            if flag:
                scores.append(score)
        return ans