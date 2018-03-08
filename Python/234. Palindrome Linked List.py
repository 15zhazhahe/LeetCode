# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        if head is None:
            return True
        p, q = head, head
        while q.next and q.next.next:
            p = p.next
            q = q.next.next
        p = p.next
        re = None
        while p:
            tmp = p.next
            p.next = re
            re = p
            p = tmp
        while re:
            if re.val != head.val:
                return False
            re = re.next
            head = head.next
        return True