# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def findTilt(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        ans = [0]
        def dfs(node):
            if node is None:
                return 0
            l = dfs(node.left)
            r = dfs(node.right)
            ans[0] += abs(l-r)
            return l + r + node.val
        dfs(root)
        return ans[0]
            