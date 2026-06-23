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
        Node*temp=head,*temp1=new Node(0),*res=temp1,*result=res;
        unordered_map<Node*,Node*>add;
        while(temp){
            temp1->next=new Node(temp->val);
            add[temp]=temp1->next;
            temp1=temp1->next;
            temp=temp->next;

        }res=res->next;
        temp=head;
        while(res){
            res->random=add[temp->random];
            res=res->next;
            temp=temp->next;
        }return result->next;
    }
};