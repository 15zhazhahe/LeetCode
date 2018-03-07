# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        p, ans = head, None
        while p:
            tmp = p.next
            p.next = ans
            ans = p
            p = tmp
        return ans