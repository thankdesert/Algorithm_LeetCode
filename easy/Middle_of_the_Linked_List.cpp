//from : https://leetcode.com/problems/middle-of-the-linked-list/


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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* cur=head;
        while(NULL!=cur){
            ++cnt;
            cur=cur->next;
        }
        int i;
        ListNode* answer=head;
        for(i=0;ceil(cnt/2)>i;++i)
            answer=answer->next;
        return answer;
    }
};
