//from : https://leetcode.com/problems/rearrange-spaces-between-words/


class Solution {
public:
    string reorderSpaces(string text) {
        queue<string> q;
        text.push_back(' ');
        int cnt_s=-1;
        for(int i=0;text.size()>i;++i){
            if(' '==text[i]){
                ++cnt_s;
            }else{
                string line="";
                while(' '!=text[i]){
                    line.push_back(text[i++]);
                }
                q.push(line);
                --i;
            }
        }
        if(1==q.size()){
            string answer=q.front();
            for(int i=0;cnt_s>i;++i)
                answer.push_back(' ');
            return answer;
        }
        
        int cnt_word=q.size();
        int k=cnt_s/(q.size()-1);
        
        string s="";
        for(int i=0;k>i;++i)
            s.push_back(' ');
        
        string answer="";
        while(!q.empty()){
            answer.append(q.front());
            q.pop();
            if(!q.empty())
                answer.append(s);
        }
        
        for(int i=0;cnt_s%(cnt_word-1)>i;++i)
            answer.push_back(' ');
        
        return answer;
    }
};
