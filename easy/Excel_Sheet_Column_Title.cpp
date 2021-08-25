//from : https://leetcode.com/problems/excel-sheet-column-title/



class Solution {
public:
    string convertToTitle(int cn) {
        string line = "";              
        while(cn > 0){
            cn--;
            line.push_back(cn % 26 + 'A');
            cn /= 26;
        }
        
        char temp;
        for(int i = 0, j = line.size() - 1; i <= j; i++, j--) {
            temp = line[i];
            line[i] = line[j];
            line[j] = temp;
        }
        
        return line;
    }
};
