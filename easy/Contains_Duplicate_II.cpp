//from : https://leetcode.com/problems/contains-duplicate-ii/


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        
        for(int i=0;nums.size()>i;++i){
            if(um.end()==um.find(nums[i]))
                um[nums[i]]=i;
            else{
                if(k>=i-um[nums[i]])
                    return true;
                else
                    um[nums[i]]=i;
            }
        }
        return false;
    }
};
