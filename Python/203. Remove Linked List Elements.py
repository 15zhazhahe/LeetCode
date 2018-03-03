# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution1(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        if head is None:
            return head
        p = head.next
        q = head
        while p is not None:
            if p.val == val:
                q.next = p.next
            else:
                q = q.next
            p = p.next
        if head.val == val:
            head = head.next
        return head


# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution2(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        headnode = ListNode(0)
        headnode.next = head
        q = headnode
        p = head
        while p is not None:
            if p.val == val:
                q.next = p.next
            else:
                q = q.next
            p = p.next
        return headnode.next