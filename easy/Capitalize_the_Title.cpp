//from : https://leetcode.com/problems/capitalize-the-title/


class Solution {
public:
    string capitalizeTitle(string title) {
        queue<string> q;
        title.push_back(' ');
        string line="";
        for(int i=0;title.size()>i;++i){
            if(' '==title[i]){
                q.push(line);
                line.clear();
                continue;
            }
            line.push_back(title[i]);
        }
        
        string answer="";
        while(false==q.empty()){
            if(2>=q.front().size()){
                for(int i=0;q.front().size()>i;++i)
                    q.front()[i]=tolower(q.front()[i]);
            }
            else{
                q.front()[0]=toupper(q.front()[0]);
                for(int i=1;q.front().size()>i;++i)
                    q.front()[i]=tolower(q.front()[i]);
            }
            answer.append(q.front()+' ');
            q.pop();
        }
        answer.pop_back();
        return answer;
    }
};
