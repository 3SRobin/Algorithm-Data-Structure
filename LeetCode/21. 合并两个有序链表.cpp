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
        ListNode* LP=new ListNode(1);
        ListNode* L=LP;
        while(l1&&l2)
        {
           if(l1->val>l2->val)
           {
              L->next=l2;
              l2=l2->next;
           }
           else
           {
              L->next=l1;
              l1=l1->next;
           }
           L=L->next;
        }
        if(l1) L->next=l1;
        else L->next=l2;
        return LP->next;
     }
};


