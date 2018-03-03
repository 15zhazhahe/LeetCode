# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution1:
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if root is None:
            return []
        q = []
        ans = []
        q.append(root)
        while len(q) > 0:
            size = len(q)
            tmp = []
            while size > 0:
                now = q.pop(0)
                tmp.append(now.val)
                size -= 1
                if now.left is not None:
                    q.append(now.left)
                if now.right is not None:
                    q.append(now.right)                
            ans.append(tmp)
        return ans[::-1]
    

class Solution2:
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        ans = []
        def dfs(node, depth):
            if node == None:
                return 
            if len(ans) < depth:
                ans.append([])
            ans[depth - 1].append(node.val)
            dfs(node.left, depth + 1)
            dfs(node.right, depth + 1)
        dfs(root, 1)
        return ans[::-1]