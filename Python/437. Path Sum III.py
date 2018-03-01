# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: int
        """
        def dfs(node, sum, val):
            if node is None:
                return 0
            s1 = 0
            if sum + node.val == val:
                s1 = 1
            s2 = dfs(node.left, sum + node.val, val)
            s3 = dfs(node.right, sum + node.val, val)
            return s1 + s2 + s3
            
        def solve(node, val):
            if node == None:
                return 0
            else:
                return dfs(node, 0, val) + solve(node.left, val) + solve(node.right, val)
        return solve(root, sum)