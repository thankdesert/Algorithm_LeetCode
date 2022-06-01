//from : https://leetcode.com/problems/reverse-vowels-of-a-string/


class Solution {
public:
    string reverseVowels(string s) {
        /*
        unordered_map<char, int> um;
        um['a']=1,um['e']=1,um['i']=1,um['o']=1,um['u']=1;
        um['A']=1,um['E']=1,um['I']=1,um['O']=1,um['U']=1;
        for(int i=0,j=s.size()-1;;){
            while(s.size()>i&&1!=um[s[i]])
                ++i;
            while(0<=j&&1!=um[s[j]])
                --j;
            if(i>=j)
                break;
            char tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;
            ++i,--j;
        }
        */
        
        int i=0,j=s.size()-1;
        while (i < j){
            i=s.find_first_of("aeiouAEIOU",i);
            j=s.find_last_of("aeiouAEIOU",j);
            if (i<j) {
                swap(s[i++],s[j--]);
            }
        }
        return s;
    }
};
