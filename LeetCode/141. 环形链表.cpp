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
    bool hasCycle(ListNode *head) {
      if(!head||!head->next) return false;
      ListNode *low=head;
      ListNode *fast=head;
      bool update=false;;
      while(fast)
      {
         if(update&&low==fast) return true;
         update=true;
         low=low->next;
         if(fast->next) fast=fast->next->next;
         else fast=fast->next;
      }
      return false;
    }
};

