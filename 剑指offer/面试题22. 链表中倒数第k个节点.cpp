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
    ListNode* getKthFromEnd(ListNode* head, int k) {
      ListNode* root=head;
      while(head)
      {
          if(k--<=0) root=root->next;
          head=head->next;
      } 
      return root;
    }
};


