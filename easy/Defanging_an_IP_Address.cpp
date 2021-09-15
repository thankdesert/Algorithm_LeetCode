//from : https://leetcode.com/problems/defanging-an-ip-address/


class Solution {
public:
    string defangIPaddr(string address) {
        string line="";
        for(int i=0;address.size()>i;++i){
            if('.'==address[i])
                line.append("[.]");
            else
                line.push_back(address[i]);
        }
        return line;
    }
};
