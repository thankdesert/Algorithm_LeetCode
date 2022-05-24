//from : https://leetcode.com/problems/goal-parser-interpretation/


class Solution {
public:
    string interpret(string command) {
        string line="";
        for(int i=0;command.size()>i;++i){
            if('(' == command[i]) {
                if(')' == command[i+1]) {
                    line.push_back('o');
                    ++i;
                }
                else {
                    line.append("al");
                    i+=3;
                }
            }
            else
                line.push_back(command[i]);
        }
        return line;
    }
};
