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

/*
class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string line="";
        int i;
        for(i=0;a.size()>i&&b.size()>i;++i){
            line.push_back(a[i]+b[i]-'0');
        }
        int size;
        a.size()>b.size()?size=a.size():size=b.size();
        for(;size>i;++i){
            a.size()>b.size()?line.push_back(a[i]):line.push_back(b[i]);
        }
        for(i=0;line.size()-1>i;++i){
            if('2'==line[i]){
                ++line[i+1];
                line[i]='0';
            }
            else if('3'==line[i]){
                ++line[i+1];
                line[i]='1';
            }
        }
        if('2'==line[line.size()-1]){
            line[line.size()-1]='0';
            line.push_back('1');
        }
        else if('3'==line[line.size()-1]){
            line[line.size()-1]='1';
            line.push_back('1');
        }
        reverse(line.begin(),line.end());
        
        return line;
    }
};
*/
