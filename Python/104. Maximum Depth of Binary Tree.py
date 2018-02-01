# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
# DFS
class Solution1:
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right))+1

# BFS
class Solution2:
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        q = list()
        q.append([root, 0])
        ans = 0
        while len(q) > 0:
            node = q.pop(0)
            ans = max(ans, node[1])
            if node[0] is None:
                continue
            q.append([node[0].left, node[1]+1])
            q.append([node[0].right, node[1]+1])
        return ans