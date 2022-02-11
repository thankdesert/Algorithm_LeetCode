//from : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string item:words){
            int i=0,j=item.size()-1;
            while(i<=j){
                if(item[i]!=item[j])
                    break;
                if(++i>=--j)
                    return item;
            }
        }
        return "";
    }
};
