//from : https://leetcode.com/problems/merge-strings-alternately/


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string answer="";
        while(word1.size()>i&&word2.size()>j){
            answer.push_back(word1[i++]);
            answer.push_back(word2[j++]);            
        }
        if(i!=word1.size()||j!=word2.size()){
            string tmp;
            int k;
            i!=word1.size()?tmp=word1:tmp=word2;
            i!=word1.size()?k=i:k=j;
            while(tmp.size()>k){
                answer.push_back(tmp[k++]);
            }
        }
        
        return answer;
    }
};
