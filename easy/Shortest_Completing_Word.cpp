//from : https://leetcode.com/problems/shortest-completing-word/


class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int arr[26]={0,};
        for(int i=0;licensePlate.size()>i;++i){
            if(isalpha(licensePlate[i])){
                ++arr[tolower(licensePlate[i])-'a'];
            }
        }
        int k=-1,min=INT_MAX;
        for(int i=0;words.size()>i;++i){
            int tmp[26]={0,};
            for(int j=0;words[i].size()>j;++j){
                ++tmp[tolower(words[i][j])-'a'];
            }
            for(int j=0;26>=j;++j){
                if(26==j){
                    if(min>words[i].size()){
                        k=i;
                        min=words[i].size();
                    }
                    break;
                }
                if(0==arr[j])
                    continue;
                if(arr[j]>tmp[j])
                    break;
            }
        }
        return -1==k?"":words[k];
    }
};
