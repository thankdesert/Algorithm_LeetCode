//from : https://leetcode.com/problems/unique-email-addresses/


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        /*
        unordered_map<string, int> um;
        int cnt=0;
        for(int i=0;emails.size()>i;++i){
            string tmp="";
            int j;
            for(j=0;emails[i].size()>j&&'@'!=emails[i][j];++j){
                if('+'==emails[i][j]){
                    while(emails[i].size()>j&&'@'!=emails[i][j])
                        ++j;
                    break;
                }
                else if('.'!=emails[i][j])
                    tmp.push_back(emails[i][j]);
            }
            while(emails[i].size()>j){
                tmp.push_back(emails[i][j]);
                ++j;
            }
            if(um.end()==um.find(tmp)){
                um[tmp]=1;
                ++cnt;
            }
        }
        return cnt;
        */
        
        unordered_set<string> st;
        for(string &email:emails) {
            string cleanEmail="";
            for(char c:email) {
                if('+'==c||'@'==c)
                    break;
                if('.'==c)
                    continue;
                cleanEmail+=c;
            }
            cleanEmail+=email.substr(email.find('@'));
            st.insert(cleanEmail);
        }
        return st.size();
    }
};
