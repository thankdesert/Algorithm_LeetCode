//from : https://leetcode.com/problems/number-of-different-integers-in-a-string/



class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_map<string,int> um;
        word.push_back(' ');
        int there_zero=0;
        for(int i=0;word.size()>i;++i){
            if(!isdigit(word[i]))
                continue;
            string tmp="";
            while(isdigit(word[i]))
                tmp.push_back(word[i++]);
            int k=0;
            for(;tmp.size()>k&&'0'==tmp[k];++k);
            printf("%s %s\n",tmp.c_str(),tmp.substr(k,tmp.size()).c_str());
            if(tmp.size()==k){
                um["0"]=1;
            }
            else
                um[tmp.substr(k,tmp.size())]=1;
        }
        printf("------------------\n");
        return um.size();
    }
};
