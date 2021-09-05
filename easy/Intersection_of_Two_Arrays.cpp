//from : https://leetcode.com/problems/intersection-of-two-arrays/


#include <unordered_map>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
        vector<int> answer;
        
        for(int i=0;nums1.size()>i;++i)
            um[nums1[i]]+=1;
        for(int i=0;nums2.size()>i;++i){
            if(1<=um[nums2[i]]){
                answer.push_back(nums2[i]);
                um[nums2[i]]=0;
            }
        }
        return answer;
    }
};
