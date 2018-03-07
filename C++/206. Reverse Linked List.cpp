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
    ListNode* reverseList(ListNode* head) {
        ListNode* ans = nullptr;
        ListNode* p = head;
        while(p)
        {
            ListNode* tmp = p->next;
            p->next = ans;
            ans = p;
            p = tmp;
        }
        return ans;
    }
};


class Solution2 {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head;
        ListNode* ans = nullptr;
        while(p)
        {
            ListNode* tmp = new ListNode(p->val);
            tmp->next = ans;
            ans = tmp;
            p = p->next;
            if(p == nullptr)
                break;
        }
        return ans;
    }
};