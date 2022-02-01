//from : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/


class Solution {
public:
    string generateTheString(int n) {
        string line="";
        int k=n/2;
        
        if(k%2==0){
            for(int i=0;k-1>i;++i)
                line.push_back('a');
            for(int i=0;k+1>i;++i)
                line.push_back('b');
        }
        else{
            for(int i=0;k>i;++i)
                line.append("ab");
        }
        for(int i=line.size(),j=0;n>i;++i,++j){
            line.push_back('c'+j);
        }
        
        return line;
    }
};
