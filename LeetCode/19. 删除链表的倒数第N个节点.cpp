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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int ans=0;
        ListNode* root=head;
        ListNode* pre=NULL;
        while(root)
        {
           ans++; 
           if(ans==n+1) pre=head;
           if(ans>n+1) pre=pre->next;
           root=root->next;
        }
        if(!pre) return head->next;
        if(pre->next) pre->next=pre->next->next;
        return head;
    }
};


