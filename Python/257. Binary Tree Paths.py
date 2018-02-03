# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def binaryTreePaths(self, root):
        """
        :type root: TreeNode
        :rtype: List[str]
        """
        ans = list()
        if root is None:
            return []
        def dfs(node, s):
            if node.left is None and node.right is None:
                ans.append(s+str(node.val))
            else:
                if node.left:
                    dfs(node.left,s+str(node.val)+'->')
                if node.right:
                    dfs(node.right, s+str(node.val)+'->')
        dfs(root,'')
        return ans