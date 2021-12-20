//from : https://leetcode.com/problems/reformat-the-string/


class Solution {
public:
    string reformat(string s) {
        vector<char> vt_char;
        vector<char> vt_digit;
        for(char item:s){
            if('0'<=item&&'9'>=item){
                vt_char.push_back(item);
            }
            else
                vt_digit.push_back(item);
        }
        int tmp=vt_char.size()-vt_digit.size();
        if(0>tmp)
            tmp*=-1;
        if(tmp>=2)
            return "";
        else{
            string answer="";
            int i=0,j=0;
            if(vt_char.size()>vt_digit.size())
                answer.push_back(vt_char[i++]);
            else
                answer.push_back(vt_digit[j++]);
            if(i>j){
                for(;;++i,++j){
                    if(vt_char.size()<=i&&vt_digit.size()<=j)
                        break;
                    if(vt_digit.size()>j)
                        answer.push_back(vt_digit[j]);
                    if(vt_char.size()>i)
                        answer.push_back(vt_char[i]);
                }
            }
            else{
                for(;;++i,++j){
                    if(vt_char.size()<=i&&vt_digit.size()<=j)
                        break;
                    if(vt_char.size()>i)
                        answer.push_back(vt_char[i]);
                    if(vt_digit.size()>j)
                        answer.push_back(vt_digit[j]);
                }
            }
            return answer;
        }
    }
};
