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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmp = new ListNode(0);
        tmp->next = head;
        ListNode* q = tmp;
        ListNode* p = head;
        while(p != nullptr)
        {
            if(p->val == val)
                q->next = p->next;
            else
                q = q->next;
            p = p->next;
        }
        return tmp->next;
    }
};