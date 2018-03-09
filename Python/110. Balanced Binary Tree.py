# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def dfs(self, node):
        if node is None:
            return 0
        return 1 + max(self.dfs(node.left), self.dfs(node.right))
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True
        l = self.dfs(root.left)
        r = self.dfs(root.right)
        if abs(l - r) > 1:
            return False
        return self.isBalanced(root.left) and self.isBalanced(root.right)