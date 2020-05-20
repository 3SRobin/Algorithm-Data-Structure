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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a=0,b=0,ab;
        int x1,x2,x3=0;
        ListNode *L=new ListNode(0);
        ListNode *LP=L;
        while(l1!=NULL||l2!=NULL||x3!=0)
        {
           ListNode *P=new ListNode(0);
           x1=0;
           x2=0;
           if(l1!=NULL)
           {
              x1=l1->val;
              l1=l1->next;
           }
           if(l2!=NULL)
           {
              x2=l2->val;
              l2=l2->next;
           }
           x3+=x1+x2;
           P->val=x3%10;
           x3/=10;
           L->next=P;
           L=P;
        }
        return LP->next;
     }
};


