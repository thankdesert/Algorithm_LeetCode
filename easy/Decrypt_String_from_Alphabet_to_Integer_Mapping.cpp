//from : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/


class Solution {
public:
    string freqAlphabets(string s) {
        stack<char> st;
        for(int i=s.size()-1;0<=i;--i){
            if('#'==s[i]){
                string line="";
                line.push_back(s[i-2]);
                line.push_back(s[i-1]);
                st.push(stoi(line)+'a'-1);
                i-=2;
            }
            else{
                st.push(s[i]-'1'+'a');
            }
        }
        string answer="";
        while(false==st.empty()){
            answer.push_back(st.top());
            st.pop();
        }
        return answer;
    }
};
