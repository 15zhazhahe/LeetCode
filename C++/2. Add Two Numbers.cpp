/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution1 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* ans = new ListNode(0);
        ListNode* t = ans;
        int cnt = 0;
        while(p != nullptr && q != nullptr)
        {
            t->val = (p->val + q->val + cnt)%10;
            cnt = (p->val + q->val + cnt)/10;
            if(p->next && q->next)
            {
                t->next = new ListNode(0);
                t = t->next;
            }
            p = p->next;
            q = q->next;
        }
        while(q != nullptr)
        {
            t->next = new ListNode(cnt);
            t = t->next;
            cnt = (t->val + q->val)/10;
            t->val = (t->val + q->val)%10;
            q = q->next;
        }
        while(p != nullptr)
        {
            t->next = new ListNode(cnt);
            t = t->next;
            cnt = (t->val + p->val)/10;
            t->val = (t->val + p->val)%10;
            p = p->next;
        }
        if(cnt)
            t->next = new ListNode(cnt);
        return ans;
    }
};


class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* ans = new ListNode(0);
        ListNode* t = ans;
        int cnt = 0;
        while(p || q || cnt)
        {
            t->next = new ListNode(0);
            t = t->next;
            int s1 = 0, s2 = 0;
            if(p) s1 = p->val;
            if(q) s2 = q->val;
            int sum = s1 + s2 + cnt;
            t->val = sum%10;
            cnt = sum/10;
            if(p) p = p->next;
            if(q) q = q->next;
        }
        return ans->next;
    }
};