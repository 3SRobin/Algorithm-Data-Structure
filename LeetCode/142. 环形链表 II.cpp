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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* low=head;
        while(fast&&fast->next)
        {
           low=low->next;
           fast=fast->next->next;
           if(fast==low) break;
        }
        if(!fast||!fast->next) return NULL;
        fast=head;
        while(fast!=low)
        {
           fast=fast->next;
           low=low->next;
        }
        return low;
     }
};


