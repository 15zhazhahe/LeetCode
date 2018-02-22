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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        while(p && p->next != nullptr)
        {
            int v1 = p->val;
            int v2 = p->next->val;
            if(v1==v2)
                p->next = p->next->next;
            else
                p = p->next;
        }
        return head;
    }
};