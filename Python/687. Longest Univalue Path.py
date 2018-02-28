# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def longestUnivaluePath(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def dfs1(val, node):
            if node == None or node.val != val:
                return 0
            else:
                return max(dfs1(val, node.left), dfs1(val, node.right)) + 1
        def dfs2(node):
            if node == None:
                return 0
            ans = dfs1(node.val, node.left) + dfs1(node.val, node.right)
            res = max(dfs2(node.left), dfs2(node.right))
            return max(ans, res)
        return dfs2(root)