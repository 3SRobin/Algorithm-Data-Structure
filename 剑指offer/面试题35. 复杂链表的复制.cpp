/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* root=head;
        Node* copy;
        Node* LP=new Node(-1);
        Node* L=LP;
        while(root)
        {
           copy=new Node(root->val);
           copy->next=root->next;
           root->next=copy;
           root=copy->next;
        }
        root=head;
        while(root)
        {
           if(root->next&&root->random) root->next->random=root->random->next;
           root=root->next->next;
        }
        root=head;
        while(root)
        {
           copy=root->next;
           L->next=copy;
           L=L->next;
           root->next=L->next;
           root=root->next;
        }
        return LP->next;
     }
};


