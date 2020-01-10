/* URL: https://leetcode.com/problems/remove-linked-list-elements/  */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p=head,*q=head;
        while(head!=NULL && head->val==val){
            p=head;
            head=head->next;
            delete p;
        }
        p=head;
        while(p!=NULL && p->next!=NULL){
           if(p->next->val==val){
               q=p->next;
               p->next= q->next;
               delete q;
           }
            else
            p=p->next;
        }
       
        return head;
    }
};
