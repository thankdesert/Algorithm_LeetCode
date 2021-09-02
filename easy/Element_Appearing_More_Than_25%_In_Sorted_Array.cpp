//from : https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/


#include <unordered_map>

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> um;
        for(int i=0;arr.size()>i;++i){
            um[arr[i]]+=1;
        }
        int k=arr.size()/4;
        for(auto item:um){
            if(k<item.second)
                return item.first;
        }
        return 0;
    }
};
