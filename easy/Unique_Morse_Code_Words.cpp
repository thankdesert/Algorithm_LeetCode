//from : https://leetcode.com/problems/unique-morse-code-words/


class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> cd=
        {".-","-...","-.-.","-..",".",
         "..-.","--.","....","..",".---",
         "-.-",".-..","--","-.","---",
         ".--.","--.-",".-.","...","-",
         "..-","...-",".--","-..-","-.--",
         "--.."};
        
        set<string> st;
        
        for(int i=0;words.size()>i;++i){
            string line="";
            for(int j=0;words[i].size()>j;++j)
                line.append(cd[words[i][j]-'a']);
            st.insert(line);
        }
        
        return st.size();
    }
};
