//from : https://leetcode.com/problems/unique-number-of-occurrences/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> s;
        unordered_map<int, int> um;
        for(int i=0;arr.size()>i;++i)
            ++um[arr[i]];
        for(auto item:um){
            if(s.end()==s.find(item.second)){
                s.insert(item.second);
            }
            else
                return false;
        }
        return true;
    }
};
