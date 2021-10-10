//from : https://leetcode.com/problems/find-lucky-integer-in-an-array/


class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> um;
        for(int i=0;arr.size()>i;++i)
            ++um[arr[i]];
        int max=-1;
        for(auto item:um){
            if(item.first==item.second&&max<item.first)
                max=item.first;
        }
        return max;
    }
};
