# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def largestValues(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ans = list()
        def dfs(node, depth):
            if node is None:
                return None
            if len(ans) <= depth:
                ans.append(node.val)
            elif ans[depth] < node.val:
                ans[depth] = node.val
            dfs(node.left, depth+1)
            dfs(node.right, depth+1)
        dfs(root, 0)
        return ans