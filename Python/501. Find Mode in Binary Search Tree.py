# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    
    def __init__(self):
        self.ans = list()
        self.cnt = 0
        self.tmp = dict()
        
    def findMode(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if root is None:
            return []
        def dfs(node):
            if node is None:
                return None
            self.tmp[node.val] = self.tmp.get(node.val, 0) + 1
            if self.tmp[node.val] > self.cnt:
                self.cnt = self.tmp[node.val]
                self.ans = [node.val]
            elif self.tmp[node.val] == self.cnt:
                self.ans.append(node.val)
            dfs(node.left)
            dfs(node.right)
        dfs(root)
        return self.ans