//from : https://leetcode.com/problems/kth-distinct-string-in-an-array/


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int>um;
        for(auto item:arr){
            if(um.end()==um.find(item)){
                um[item]=1;
                continue;
            }
            if(2>um[item])
                um[item]++;            
        }
        for(auto item:arr){
            if(2>um[item]){
                if(0==--k)
                    return item;
            }
        }
        return "";
    }
};
