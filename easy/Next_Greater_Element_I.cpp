//from : https://leetcode.com/problems/next-greater-element-i/


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> um;
        
        for(int i=0;nums2.size()>i;++i){
            while(false==st.empty()&&st.top()<nums2[i]){
                um[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(false==st.empty()){
            um[st.top()]=-1;
            st.pop();
        }        
        
        vector<int> answer;
        for(int i=0;nums1.size()>i;++i)
            answer.push_back(um[nums1[i]]);
        return answer;
    }
};
