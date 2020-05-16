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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* LP = new ListNode(-1);
        ListNode* L = LP;
        ListNode* pos = NULL;
        ListNode* res = NULL;
        int n = 0;
        while (head)
        {
            ListNode* ans = head;
            head = head->next;
            ans->next = pos;
            pos = ans;
            if (++n == k)
            {
                n = 0;
                L->next = pos;
                pos = NULL;
                while (L->next) L = L->next;
            }
        }
        if (n != 0)
        {
            while (pos)
            {
                ListNode* ans = pos;
                pos = pos->next;
                ans->next = res;
                res = ans;
            }
            L->next = res;
        }
        return LP->next;
    }
};


