//from : https://leetcode.com/problems/check-if-n-and-its-double-exist/


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> um;
        for(int item:arr){
            if(0!=item)
                um[item]=1;
            else
                ++um[0];
        }
        if(2==um[0])
            return true;
        for(int item:arr){
            if(0!=item&&1==um[item*2]){
                return true;
            }
        }
        return false;
    }
};
