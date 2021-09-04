//from : https://leetcode.com/problems/reverse-linked-list/


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
    void helper(ListNode* prev, ListNode* cur){
        if(cur==NULL)
            return;
        helper(cur, cur->next);
        cur->next=prev;
    }
public:
    ListNode* reverseList(ListNode* head) {
        if(NULL==head)
            return NULL;
        ListNode* answer;
        for(answer=head;NULL!=answer->next;answer=answer->next);
        helper(NULL,head);
        return answer;
    }
};
