//from : https://leetcode.com/problems/valid-anagram/



class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26, 0);
        if(s.size() != t.size())
            return false;
        for(auto item : s)
            v[item - 'a'] += 1;
        
        for(auto item : t) {
            if(v[item - 'a'] <= 0 )
                return false;
            v[item - 'a'] -= 1;
        }        
        
        return true;
    }
};
