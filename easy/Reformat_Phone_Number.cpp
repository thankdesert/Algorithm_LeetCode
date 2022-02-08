//from : https://leetcode.com/problems/reformat-phone-number/


class Solution {
public:
    string reformatNumber(string number) {
        string tmp="";
        
        for(int i=0;number.size()>i;++i){
            if(!isdigit(number[i]))
                continue;
            else
                tmp.push_back(number[i]);
        }
        
        string answer="";
        for(int i=0;tmp.size()>i;++i){
            if(4==tmp.size()-i){
                answer.push_back(tmp[i]);
                answer.push_back(tmp[i+1]);
                answer.push_back('-');
                answer.push_back(tmp[i+2]);
                answer.push_back(tmp[i+3]);
                break;
            }
            for(int j=0;tmp.size()>i&&3>j;++j){
                answer.push_back(tmp[i++]);
            }
            --i;
            answer.push_back('-');
        }
        if('-'==answer[answer.size()-1])
            answer.pop_back();
        return answer;
    }
};
