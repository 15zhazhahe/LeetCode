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
    bool isPalindrome(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head;
        if(head == nullptr)
            return true;
        while(q->next && q->next->next)
        {
            p = p->next;
            q = q->next->next;
        }
        p = p->next;
        ListNode* re = nullptr;
        while(p)
        {
            ListNode* tmp = p->next;
            p->next = re;
            re = p;
            p = tmp;
        }
        while(re)
        {
            if(head->val != re->val)
                return false;
            head = head->next;
            re = re->next;
        }
        return true;
    }
};