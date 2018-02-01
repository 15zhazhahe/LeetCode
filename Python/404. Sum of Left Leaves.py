# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
# Time: O(n)
class Solution:
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def solve(node, flag):
            if node is None:
                return 0
            if node.left is None and node.right is None:
                if flag == True:
                    return node.val
                return 0
            return solve(node.left, True) + solve(node.right, False)
        return solve(root, False)