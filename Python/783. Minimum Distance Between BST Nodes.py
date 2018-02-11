# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def minDiffInBST(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        a = []
        def dfs(node):
            if node is None:
                return None
            dfs(node.left)
            a.append(node.val)
            dfs(node.right)
        dfs(root)
        ans = -1
        for i in range(1, len(a)):
            if ans != -1:
                ans = min(ans, a[i]-a[i-1])
            else:
                ans = a[i] - a[i-1]
        return ans