# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution1(object):
    cnt = 0
    def convertBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if root is None:
            return None
        self.convertBST(root.right)
        self.cnt += root.val
        root.val = self.cnt
        self.convertBST(root.left)
        return root
        
class Solution2:
    def convertBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        def dfs1(node):
            if node is None:
                return 0
            sum = node.val
            sum += dfs1(node.right)
            sum += dfs1(node.left)
            return sum
        def dfs(node, pre, son, flag):
            if node is None:
                return None
            # print(node.val, pre, son ,flag)
            node.val += dfs1(node.right)       
            node.val += flag*pre
            if son == -1:
                dfs(node.right, node.val, 1, 0)
                dfs(node.left, node.val, 0, 1)
                return node
            if son == 0 or flag == 1:
                dfs(node.right, pre, 1, 1)
                dfs(node.left, node.val, 0, 1)
            else:
                dfs(node.right, node.val, 1, 0)
                dfs(node.left, node.val, 0, 1) 
        if root:
            dfs(root, 0, -1, 0)
        return root