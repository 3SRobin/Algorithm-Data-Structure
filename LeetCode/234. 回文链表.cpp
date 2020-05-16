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
      if(!head||!head->next) return true;
      ListNode* fast=head;
      ListNode* low=head;
      ListNode* pre;
      ListNode* p=NULL;
      while(fast!=NULL&&fast->next!=NULL)    //time:n/2;
      {
         pre=low;
         low=low->next;
         fast=fast->next->next;
         pre->next=p;
         p=pre;
      }
      ListNode* temp=low;
      if(fast!=NULL) temp=low->next;          //后半段； 
      low=pre;
      while(low!=NULL)
      if(low->val!=temp->val) return false;
      else {low=low->next;temp=temp->next;} 
      return true;
   }
};


