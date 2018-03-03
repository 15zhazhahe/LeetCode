# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution1(object):
    def findSecondMinimumValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        ans = [float('inf'), float('inf')]

        def dfs(node):
            if node is None:
                return None
            if node.val != ans[0] and node.val != ans[1]:
                if node.val < ans[0]:
                    ans[1] = ans[0]
                    ans[0] = node.val
                elif node.val < ans[1]:
                    ans[1] = node.val
            dfs(node.left)
            dfs(node.right)
        dfs(root)
        if ans[1] == float('inf'):
            ans[1] = -1
        return ans[1]


class Solution2(object):
    def findSecondMinimumValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        ans = [float('inf')]
        def dfs(node):
            if node is None:
                return None
            if root.val < node.val < ans[0]:
                ans[0] = node.val
            dfs(node.left)
            dfs(node.right)
        dfs(root)
        return -1 if ans[0] == float('inf') else ans[0]