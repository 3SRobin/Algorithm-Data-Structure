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
    ListNode* sortList(ListNode* head) {
        ListNode* LP=new ListNode(-1);
        ListNode* L;
        ListNode* P;
        while(head)
        {
           L=LP;
           while(L->next&&L->next->val<head->val) L=L->next;
           P=head;
           head=head->next;
           P->next=L->next;
           L->next=P;
        }
        return LP->next;
     }
};


