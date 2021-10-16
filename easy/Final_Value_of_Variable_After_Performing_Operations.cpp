//from : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt=0;
        /*
        for(int i=0;operations.size()>i;++i){
            for(int j=0;operations[i].size()>j;++j){
                if('X'==operations[i][j])
                    continue;
                '+'==operations[i][j]?cnt+=1:cnt-=1;
            }
        }
        */
        
        for(auto item:operations){
            if("++X"==item||"X++"==item)
                cnt+=1;
            else
                cnt-=1;
        }
        
        return cnt;
    }
};
