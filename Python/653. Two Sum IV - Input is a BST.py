class Solution:
    def findTarget(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: bool
        """
        maple = dict()
        def search(node, k):
            if node is None:
                return False
            if maple.get(k-node.val) is None:
                maple[node.val] = 1
                if search(node.left, k):
                    return True
                if search(node.right, k):
                    return True
                return False
            else:
                return True
        return search(root, k)