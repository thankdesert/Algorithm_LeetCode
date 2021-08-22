//from : https://leetcode.com/problems/add-binary/



class Solution {
public:
    char add_bin(char l, char r) {
        return l + r - '0';
    }
    
    string addBinary(string a, string b) {
        if(a.size() >= b.size()) {
            for(int i = a.size()-1, j = b.size()-1; i >= 0 && j >= 0; i--, j--)
                a[i] = add_bin(a[i], b[j]);
        }
        else {
            for(int i = b.size()-1, j = a.size()-1; i >= 0 && j >= 0; i--, j--)
                b[i] = add_bin(a[j], b[i]);
        }
        
        string s = "0";
        a.size() >= b.size() ? s += a : s += b;
        
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '2') {
                s[i] = '0';
                s[i - 1] += 1;
            }
            else if(s[i] == '3') {
                s[i] = '1';
                s[i-1] += 1;
            }
        }
        
        return s[0] != '0' ? s : s.substr(1, s.size()-1);
    }
};
