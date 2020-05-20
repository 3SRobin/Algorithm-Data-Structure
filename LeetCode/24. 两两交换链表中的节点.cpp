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
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        ListNode* pos=NULL;
        head=head->next;
        while(fast)
        {
            slow->next=fast->next;
            fast->next=slow;
            if(pos) pos->next=fast;
            pos=slow;
            slow=slow->next;
            if(!slow) break;
            fast=slow->next;
        }
        return head;
    }
};


