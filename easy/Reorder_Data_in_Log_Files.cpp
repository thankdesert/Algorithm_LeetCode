//from : https://leetcode.com/problems/reorder-data-in-log-files/



class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {        
        stable_sort(logs.begin(),logs.end(),[](string a,string b){
            int l=0b000,tmp_a=a.find(" ")+1,tmp_b=b.find(" ")+1;
            if(isalpha(a[tmp_a]))
                l^=0b001;
            if(isalpha(b[tmp_b]))
                l^=0b010;
                switch(l){
                    case 0b000:
                        return false;
                    case 0b001:
                        return true;
                    case 0b010:
                        return false;
                    case 0b011:
                    if(a.substr(tmp_a)!=b.substr(tmp_b))
                        return a.substr(tmp_a)<=b.substr(tmp_b);
                    else
                        return a.substr(0,tmp_a-1)<b.substr(0,tmp_b-1);
                    }
                    return a<b;
                });
        return logs;
        /*
        vector<string> lt;
        vector<string> dgt;
        for(int i=0;logs.size()>i;++i){
            int tmp=logs[i].find(' ')+1;
            if(isalpha(logs[i][tmp]))
                lt.push_back(logs[i]);
            else
                dgt.push_back(logs[i]);
        }
        sort(lt.begin(),lt.end(),
             [](string& a,string& b){
                 int tmp_a=a.find(" ")+1,tmp_b=b.find(" ")+1;
                 if(a.substr(tmp_a)!=b.substr(tmp_b))
                     return a.substr(tmp_a)<b.substr(tmp_b);
                 else
                     return a.substr(0,tmp_a-1)<b.substr(0,tmp_b-1);
             });
        for(auto item:dgt)
            lt.push_back(item);
        return lt;
        */
    }
};
