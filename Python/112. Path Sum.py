# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        def dfs(node, s, val):
            if node is None:
                return False
            s += node.val
            if node.left is None and node.right is None:
                return s == val
            return dfs(node.left, s, val) or dfs(node.right, s, val)
        return dfs(root, 0, sum)