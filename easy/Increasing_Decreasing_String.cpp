//from : https://leetcode.com/problems/increasing-decreasing-string/



class Solution {
public:
    string sortString(string s) {
        vector<int> v(26,0);
        for(int i=0;s.size()>i;++i)
            ++v[s[i]-'a'];
        int i,cnt=0;
        string line="";
        while(s.size()>cnt){
            i=0;
            while(26>i){
                if(0==v[i]){
                    ++i;
                    continue;
                }
                line.push_back(i+'a');
                --v[i];
                ++i;
                ++cnt;
            }
            i=25;
            while(0<=i){
                if(0==v[i]){
                    --i;
                    continue;
                }
                line.push_back(i+'a');
                --v[i];
                --i;
                ++cnt;
            }
        }
        return line;
    }
};
