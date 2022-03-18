//from : https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/


class Solution {
public:
    vector<string> cellsInRange(string s) {
        char start_num=s[1],end_num=s[4],start_char=s[0],end_char=s[3];
        vector<string> answer;
        for(int i=start_char;end_char>=i;++i){
            for(int j=start_num;end_num>=j;++j){
                string tmp="";
                tmp.push_back(i);
                tmp.push_back(j);
                answer.push_back(tmp);
            }
        }
        return answer;
    }
};
