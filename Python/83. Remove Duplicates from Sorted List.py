# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        p = head
        while p != None and p.next != None:
            v1, v2 = p.val, p.next.val
            if v1 == v2:
                p.next = p.next.next
            else:
                p = p.next
        return head