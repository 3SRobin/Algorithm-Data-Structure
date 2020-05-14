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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB) return NULL;
        ListNode* p1=headA;
        ListNode* p2=headB;
        ListNode* p3=headA;
        ListNode* p4=headB;
        while(1)
        {
           if(!headB) return NULL;
           if(headA&&headB) headA=headA->next;
           else if(!headA&&headB) headB=headB->next;
           if(!p1) p1=p4;
           if(!p2) p2=p3;
           if(p1&&p2)
           {
              if(p1==p2) return p1;
              p1=p1->next;
              p2=p2->next;
           }
        }
        return NULL;
     }
};



