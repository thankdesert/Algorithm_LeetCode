//from : https://leetcode.com/problems/number-of-lines-to-write-string/



class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> answer={1,0};
        int cur=0;
        for(int i=0;s.size()>i;++i){
            if(100<cur+widths[s[i]-'a']){
                ++answer[0];
                cur=widths[s[i]-'a'];
                continue;
            }
            cur+=widths[s[i]-'a'];
        }
        answer[1]=cur;
        return answer;
    }
};
