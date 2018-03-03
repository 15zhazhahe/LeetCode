# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True
        q1 = [root.left]
        q2 = [root.right]
        while len(q1) > 0 and len(q2) > 0:
            now1 = q1.pop(0)
            now2 = q2.pop(0)
            if now1 is None and now2 is None:
                continue
            if now1 is None or now2 is None:
                return False
            if now1.val != now2.val:
                return False
            q1.append(now1.left)
            q1.append(now1.right)
            q2.append(now2.right)
            q2.append(now2.left)
        return True