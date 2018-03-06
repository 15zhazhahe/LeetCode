# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    
    def __init__(self):
        self.ans = float('inf')
        self.val = -1
        
    def getMinimumDifference(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def dfs(node):
            if node.left:
                dfs(node.left)
            if self.val >= 0:
                self.ans = min(self.ans, node.val - self.val)
            self.val = node.val
            if node.right:
                dfs(node.right)
            return self.ans
        return dfs(root)