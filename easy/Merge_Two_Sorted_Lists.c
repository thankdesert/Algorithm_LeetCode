//from : https://leetcode.com/problems/merge-two-sorted-lists/


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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* answer = new ListNode(0);
        ListNode* cur = answer;
        while(true) {
            if(l1 == NULL || l2 == NULL)
                break;
            if(l1->val <= l2->val) {
                cur->next = new ListNode(l1->val, NULL);
                l1 = l1->next;
            }
            else {
                cur->next = new ListNode(l2->val, NULL);
                l2 = l2->next;
            }
            cur = cur->next;
        } 
        
        if(l1 != NULL){
            for(;l1 != NULL; l1 = l1->next) {
                cur->next = new ListNode(l1->val, NULL);
                cur = cur->next;
            }
        }
        if(l2 != NULL) {
            for(;l2 != NULL; l2 = l2->next) {
                cur->next = new ListNode(l2->val, NULL);
                cur = cur->next;
            }
        }
        
        answer = answer->next;
        return answer;
    }
};
