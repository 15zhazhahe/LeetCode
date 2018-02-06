class Solution:
    def tree2str(self, t):
        """
        :type t: TreeNode
        :rtype: str
        """
        if t is None:
            return ""
        ans = str(t.val)
        if t.left or t.right:
            ans += "(" + self.tree2str(t.left) + ")"
            if t.right:
                ans += "(" + self.tree2str(t.right) + ")"
        return ans