/* URL: https://leetcode.com/problems/linked-list-cycle/  */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        struct ListNode *p,*q;
        p=head;
        q=head;
        while(p!=NULL && p->next!=NULL){
            q=q->next;
            p= p->next->next;
            if(p==q) return true;
        }
        return false;   
    }
};
