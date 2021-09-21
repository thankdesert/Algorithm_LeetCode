//from : https://leetcode.com/problems/zigzag-conversion/submissions/


class Solution {
public:
    string convert(string s, int numRows) {
        string line="";
        if(1==numRows)
            return s;
        vector<vector<char>> v(numRows, vector<char>(s.size(), ' '));
        for(int i=0,x=0,y=0, is_down=1;s.size()>i;++i){
            if(1==is_down){
                v[y][x]=s[i];
                y+=1;
            }
            else{
                v[y][x]=s[i];
                x+=1;y-=1;
            }
            if(y==0||y==numRows-1)
                is_down^=1;
        }
        
        for(int i=0;v.size()>i;++i){
            while(false==v[i].empty()&&' '==v[i].back())
                v[i].pop_back();
        }
        
        for(int i=0;v.size()>i;++i)
            for(int j=0;v[i].size()>j;++j){
                if(' '!=v[i][j])
                    line.push_back(v[i][j]);
            }
        return line;
    }
};
