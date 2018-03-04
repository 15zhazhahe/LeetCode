# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        q, p = l1, l2
        ans = ListNode(-1)
        cnt, tmp = 0, ans
        while q or p or cnt:
            s1 = q.val if q else 0
            s2 = p.val if p else 0
            s = s1 + s2 + cnt
            tmp.next = ListNode(s % 10)
            tmp = tmp.next
            cnt = s // 10
            if p:
                p = p.next
            if q:
                q = q.next
        return ans.next
            