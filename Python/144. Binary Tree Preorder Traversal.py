# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ans = list()
        def dfs(node):
            if node == None:
                return None
            ans.append(node.val)
            dfs(node.left)
            dfs(node.right)
        dfs(root)
        return ans