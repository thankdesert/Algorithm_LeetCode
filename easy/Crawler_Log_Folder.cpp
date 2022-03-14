//from : https://leetcode.com/problems/crawler-log-folder/


class Solution {
public:
    int minOperations(vector<string>& logs) {
        //string last="";
        int depth=0;
        for(int i=0;logs.size()>i;++i){
            if("./"==logs[i])
                continue;
            else if("../"==logs[i]){
                depth==0?depth:depth-=1;
            }
            else{
                /*
                string tmp=logs[i].substr(0,logs[i].size()-1);
                if(last==tmp)
                    continue;
                last=tmp;
                ++depth;
                */
                ++depth;
            }
        }
        return depth;
    }
};
