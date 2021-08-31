//from : https://leetcode.com/problems/shortest-distance-to-a-character/


class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v(s.size(), s.size()+1);
        for(int i=0;s.size()>i;++i){
            if(s[i]==c){
                v[i]=0;
                for(int j=i-1;0<=j;--j){
                    if(s[j]!=c && v[j]>i-j)
                        v[j]=i-j;
                    else
                        break;
                }
                for(int j=i+1;s.size()>j;++j){
                    if(s[j]!=c && v[j]>j-i)
                        v[j]=j-i;
                    else
                        break;
                }
            }
        }
        return v;
    }
};
