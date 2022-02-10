//from : https://leetcode.com/problems/count-common-words-with-one-occurrence/


class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> um;
        unordered_map<string,int> um2;
        for(string item:words1)
            ++um[item];
        for(string item:words2){
            ++um2[item];
        }
        int cnt=0;
        for(auto item:um){
            if(1==item.second&&1==um2[item.first])
                ++cnt;
        }
        return cnt;
    }
};
