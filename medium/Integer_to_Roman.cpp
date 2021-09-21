//from : https://leetcode.com/problems/integer-to-roman/



#include <unordered_map>

class Solution {
public:
    string intToRoman(int num) {
        string line="";
        unordered_map<int, char> um;
        um[1]='I';um[5]='V';um[10]='X';um[50]='L';
        um[100]='C';um[500]='D';um[1000]='M';
        for(int k=1000;k>=1;k/=10){
            if(k>num)
                continue;
            int tmp=num/k;
            if(9==tmp){
                line.push_back(um[k]);
                line.push_back(um[k*10]);
            }
            else{
                if(4==tmp){
                    line.push_back(um[k]);
                    line.push_back(um[k*5]);
                }
                else if(5<=tmp){
                    line.push_back(um[k*5]);
                    for(int i=5;tmp>i;++i)
                        line.push_back(um[k]);
                }
                else{
                    for(int i=0;tmp>i;++i)
                        line.push_back(um[k]);
                }
            }
            num%=k;
        }
            
        return line;
    }
};
