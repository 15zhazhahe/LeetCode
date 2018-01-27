# Time:  O(log(n))
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def get_value(self, t):
        if t is not None:
            v, l, r = t.val, t.left, t.right
        else:
            v, l ,r = 0, None, None
        return v, l, r

    def mergeTrees(self, t1, t2):
        """
        :type t1: TreeNode
        :type t2: TreeNode
        :rtype: TreeNode
        """
        if t1 is None and t2 is None:
            return None
        v1, l1, r1 = self.get_value(t1)
        v2, l2, r2 = self.get_value(t2)
        node = TreeNode(v1+v2)
        node.left = self.mergeTrees(l1, l2)
        node.right = self.mergeTrees(r1, r2)
        return node