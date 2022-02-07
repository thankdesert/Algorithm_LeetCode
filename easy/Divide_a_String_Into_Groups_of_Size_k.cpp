//from : https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/



class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> answer;
        if(0!=s.size()%k){
            for(int i=0;s.size()%k>i;++i)
                s.push_back(fill);
        }
        for(int i=0;s.size()>=i+k;i+=k){
            answer.push_back(s.substr(i,k));
        }
        return answer;
    }
};
