/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
        return head;
        ListNode*fast=head,*slow=head;
        for(int i=0;i<n;i++)
        fast=fast->next;
        if(!fast){
           ListNode*r=head;
        head=r->next;
        delete r;
        return head;
        }
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode*r=slow->next;
        slow->next=r->next;
        delete r;
        return head;
    }
};