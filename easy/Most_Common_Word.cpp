//from : https://leetcode.com/problems/most-common-word/


class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> banned_um;
        unordered_map<string, int> um;
        string line="";
        for(auto item:banned){
            for(auto ch:item)
                line.push_back(tolower(ch));
            banned_um[line]=1;
            line.clear();
        }
        line.clear();
        
        paragraph.push_back(' ');
        for(int i=0;paragraph.size()>i;++i){
            char tmp=tolower(paragraph[i]);
            if('a'>tmp||'z'<tmp){
                if(""!=line&&1!=banned_um[line])
                    um[line]+=1;
                line.clear();
                continue;
            }
            line.push_back(tmp);
        }
        
        int max=0;
        for(auto item:um){
            if(max<item.second){
                max=item.second;
                line=item.first;
            }
        }
        
        return max==0?"":line;
    }
};
