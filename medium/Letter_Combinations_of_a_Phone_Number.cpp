//from : https://leetcode.com/problems/letter-combinations-of-a-phone-number/




class Solution {
    char arr[10] = {'0', '0', 'a', 'd', 'g', 'j', 'm', 'p', 't', 'w'};
public:
    void insert(int k, vector<string>& v, string line, string& digits) {
        if(k == digits.size()) {
            v.push_back(line);
            return;
        }
        for(int i = 0; i<4; i++) {
            if(i == 3 && (digits[k] != '7' && digits[k] != '9'))
                break;
            string temp = line;
            temp.push_back(arr[digits[k]-'0'] + i);
            insert(k+1, v, temp, digits);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.size() == 0)
            return v;
        insert(0, v, "", digits);
        return v;
    }
};
