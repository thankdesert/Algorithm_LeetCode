//from : https://leetcode.com/problems/string-matching-in-an-array/



class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(),words.end(),
             [](string a,string b) {
                return a.size()<b.size(); 
        });
        unordered_map<string,string> um;
        vector<string> answer;
        for(int i=0;words.size()>i;++i)
            um[words[i]]="";
        for(int i=0;words.size()>i;++i){
            //printf("%d ",i);
            for(auto item:um){
                //printf("%s *%s* ",words[i].c_str(),item.first.c_str());
                if(item.first.size()<=words[i].size())
                    continue;
                for(int j=0;item.first.size()-words[i].size()>=j;++j){
                    //printf("[%s] ",item.first.substr(j,words[i].size()).c_str());
                    if(words[i]==item.first.substr(j,words[i].size())&&""==um[words[i]]){
                        um[words[i]]="x";
                        answer.push_back(words[i]);
                    }
                }
            }
            //printf("\n");
        }
        return answer;
    }
};
