//from : https://leetcode.com/problems/count-the-number-of-consistent-strings/


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26]={0,};
        int answer=0;
        for(int i=0;allowed.size()>i;++i)
            ++arr[allowed[i]-'a'];
        for(int i=0;words.size()>i;++i){
            for(int j=0;words[i].size()>j;++j){
                if(0==arr[words[i][j]-'a'])
                    break;
                if(words[i].size()-1==j)
                    ++answer;
            }
        }
        return answer;
    }
};
