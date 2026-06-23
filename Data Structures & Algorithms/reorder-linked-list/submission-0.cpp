class Solution {
public:
ListNode*front;
    int k;
    void recur(ListNode* back,int n){
        if(!back)return;
        recur(back->next,n+1);
        if(k%2==0 && n<k/2)return;
         if(k%2!=0 && n<=k/2)return;
            ListNode*temp=front->next;
            front->next=back;
            back->next=temp;
            front=temp;
    }
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL)return;
        ListNode* temp=head;k=0;
        while(temp){
            k++;
            temp=temp->next;
        }
        front=head;
        recur(head,0);
        front->next=nullptr;

    }
};