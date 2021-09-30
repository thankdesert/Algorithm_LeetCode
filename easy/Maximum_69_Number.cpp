//from : https://leetcode.com/problems/maximum-69-number/


class Solution {
public:
    int maximum69Number (int num) {
        string line=to_string(num);        
        for(int i=0;line.size()>i;++i)
            if('6'==line[i]){
                line[i]='9';
                break;
            }
        return stoi(line);
    }
};
