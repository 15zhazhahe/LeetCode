/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        while(l1 && l2)
        {
            if(l1->val > l2->val)
            {
                ListNode* node = new ListNode(l2->val);
                l2 = l2->next;
                p->next = node;
            }
            else
            {
                ListNode* node = new ListNode(l1->val);
                l1 = l1->next;
                p->next = node;
            }
            p = p->next;
        }
        p->next = l1?l1:l2;
        return head->next;
    }
};