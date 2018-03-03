# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution1:
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        ans = [-1]
        def dfs(node, depth):
            if node is None:
                ans[0] = 0
                return 
            if node.left is None and node.right is None:
                if ans[0] == -1:
                    ans[0] = depth + 1
                else:
                    ans[0] = min(ans[0],depth + 1)
            if node.left:
                dfs(node.left, depth + 1)
            if node.right:
                dfs(node.right, depth + 1)
        dfs(root, 0)
        return ans[0]

class Solution2:
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        if root.left and root.right:
            return min(self.minDepth(root.left), self.minDepth(root.right)) + 1
        elif root.left is None:
            return self.minDepth(root.right) + 1
        elif root.right is None:
            return self.minDepth(root.left) + 1