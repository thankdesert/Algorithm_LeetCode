//from : https://leetcode.com/problems/palindrome-linked-list/


#include <stack>

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
    bool isPalindrome(ListNode* head) {
        int k=0;
        for(ListNode* item=head;item;item=item->next)
            ++k;
        ListNode* l=head;
        ListNode* r=head;
        stack<int> st;
        for(int i=0;k/2>i;++i){
            st.push(l->val);
            l=l->next;
        }
        for(int i=0;k/2 + k%2>i;++i)
            r=r->next;
        
        while(r){
            if(st.top()!=r->val)
                return false;
            st.pop();
            r=r->next;
        }
        return true;
    }
};
