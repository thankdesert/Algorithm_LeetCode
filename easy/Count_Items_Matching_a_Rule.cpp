//from : https://leetcode.com/problems/count-items-matching-a-rule/


class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int answer=0,k=2;
        if("type"==ruleKey)
            k=0;
        else if("color"==ruleKey)
            k=1;
        for(int i=0;items.size()>i;++i){
            ruleValue==items[i][k]?answer+=1:answer;
        }
        return answer;
    }
};
