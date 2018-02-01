# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
# Time: O(n)
# BFS
class Solution1:
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        ans = list()
        q = list()
        q.append(root)
        while len(q) > 0:
            sum = 0.0
            cnt = len(q)
            for i in range(cnt):
                node = q.pop(0)
                sum += node.val
                if node.left is not None:
                    q.append(node.left)
                if node.right is not None:
                    q.append(node.right)
            ans.append(sum/cnt)
        return ans

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
# DFS
class Solution2:
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        res = list()
        ans = list()

        def count(node, depth):
            if node is None:
                return
            if len(res) <= depth:
                res.append([node.val, 1])
            else:
                res[depth][0] += node.val
                res[depth][1] += 1
            count(node.left, depth+1)
            count(node.right, depth+1)
        count(root, 0)
        for v, d in res:
            ans.append(v/d)
        return ans