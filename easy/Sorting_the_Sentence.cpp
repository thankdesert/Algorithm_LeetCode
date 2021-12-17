//from : https://leetcode.com/problems/sorting-the-sentence/


class Solution {
public:
    string sortSentence(string s) {
        s.push_back(' ');
        vector<pair<int,string>> v;
        for(int i=0;s.size()>i;++i){
            string line="";
            while('0'>s[i]||'9'<s[i])
                line.push_back(s[i++]);            
            v.push_back(make_pair(s[i++]-'0',line));
        }
        sort(v.begin(),v.end());
        string answer="";
        for(auto item:v){
            answer.append(item.second+' ');
        }
        answer.pop_back();
        return answer;
    }
};
