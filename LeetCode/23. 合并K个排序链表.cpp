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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return MergeSort(lists,0,lists.size()-1);
    }
    ListNode* MergeSort(vector<ListNode*>& lists,int s,int t)
    {
        if(s==t) return lists[s];
        if(s>t) return NULL;
        int mid=(s+t)/2;
        ListNode* left=MergeSort(lists,s,mid);
        ListNode* right=MergeSort(lists,mid+1,t);
        return Merge(left,right);
    }
    ListNode* Merge(ListNode* left,ListNode* right)
    {
        ListNode* LP=new ListNode(-1);
        ListNode* L=LP;
        while(left&&right)
        {
            if(left->val<right->val)
            {
                L->next=left;
                left=left->next;
            }
            else
            {
                L->next=right;
                right=right->next;
            }
            L=L->next;
            L->next=NULL;
        }
        L->next=left?left:right;
        return LP->next;
    }
};


