//from : https://leetcode.com/problems/make-the-string-great/


class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        st.push('*');
        for(char item:s){
            if((0!=isupper(item)&&st.top()==tolower(item))||
               (0!=islower(item)&&st.top()==toupper(item))){
                st.pop();
            }
            else
                st.push(item);
        }
        string answer="";
        while('*'!=st.top()){
            answer.push_back(st.top());
            st.pop();
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};
