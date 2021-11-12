//from : https://leetcode.com/problems/remove-linked-list-elements/



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
    ListNode* removeElements(ListNode* head, int val) {
        for(; head != NULL && head->val == val; head = head->next);
        for(ListNode* cur = head; cur != NULL;) {
            if(cur->next == NULL)
                break;
            if(cur->next->val == val)
                cur->next = cur->next->next;
            else
                cur = cur->next;
        }
        return head;
    }
};

/*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(NULL!=head&&val==head->val)
            head=head->next;
        if(NULL==head)
            return NULL;
        ListNode* cur=head;
        while(NULL!=cur->next){
            if(val==cur->next->val){
                cur->next=cur->next->next;
                continue;
            }
            cur=cur->next;
        }
        
        return head;
    }
};
*/
