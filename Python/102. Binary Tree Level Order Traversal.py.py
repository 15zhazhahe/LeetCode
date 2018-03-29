# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        ans = list()
        def dfs(node, depth):
            if node is None:
                return None
            if depth >= len(ans):
                ans.append([node.val])
            else:
                ans[depth].append(node.val)
            dfs(node.left, depth+1)
            dfs(node.right, depth+1)
        dfs(root, 0)
        return ans