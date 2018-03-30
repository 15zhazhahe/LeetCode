# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def rightSideView(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ans = list()
        def dfs(node, depth):
            if node is None:
                return False
            if depth == len(ans):
                ans.append([node.val])
            else:
                ans[depth].append(node.val)
            dfs(node.left, depth+1)
            dfs(node.right, depth+1)
        dfs(root, 0)
        return [num[-1] for num in ans]