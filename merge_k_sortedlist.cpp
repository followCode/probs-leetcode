/* URL : https://leetcode.com/problems/merge-k-sorted-lists/ */

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
        
        priority_queue <int, vector<int>, greater<int>> pq; 
        
        for(int i = 0 ; i < lists.size(); i++) {
            auto head = lists[i];
            
            while(head != NULL) {
                pq.push(head->val);
                head = head->next;
            }
        }
        
        auto prehead = new ListNode(-1);
        auto head = prehead;
        
        while(!pq.empty()) {
            head->next = new ListNode(pq.top());
            pq.pop();
            head = head->next;
        }
        
        return prehead->next;
    }
};
