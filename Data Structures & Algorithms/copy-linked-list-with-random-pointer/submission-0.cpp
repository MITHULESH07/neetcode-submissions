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
        Node*temp=head;
        while(temp){
            Node*curr=temp->next;
            Node*newNode=new Node(temp->val);
            temp->next=newNode;
            newNode->next=curr;
            temp=curr;
        }temp=head;
        while(temp && temp->next){
            if(temp->random)
                temp->next->random=temp->random->next;
            else
                temp->next->random=NULL;
            temp=temp->next->next;
        }
        temp=head;
        Node*res=new Node(0);
        Node*result=res;
        while(temp){
            Node*curr=temp->next;
            temp->next=curr->next;
            res->next=curr;
            curr->next=NULL;
            res=res->next;
            temp=temp->next;
        }return result->next;
    }
};