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
    bool hasCycle(ListNode *head) {
        ListNode* l = head, *r = head;
        
        while(true) {
            if(l == NULL && r == NULL)
                return false;
            l = l->next;
            for(int i = 0; i<2; i++) {
                if(r == NULL)
                    break;
                r = r->next;
            }
            
            if(l != NULL && l == r)
                return true;
        }
    }
};
