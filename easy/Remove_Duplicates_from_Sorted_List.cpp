//from : https://leetcode.com/problems/remove-duplicates-from-sorted-list/



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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur, *temp;
        if(head == NULL)
            return NULL;
        for(cur = head;;) {
            if(cur->next == NULL)
                break;
            if(cur->val == cur->next->val) {
                temp = cur->next;
                cur->next = temp->next;
                delete temp;
                continue;
            }
            cur = cur->next;
        }
        
        
        return head;
    }
};
