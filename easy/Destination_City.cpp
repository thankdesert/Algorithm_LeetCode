//from : https://leetcode.com/problems/destination-city/


class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> um;
        for(int i=0;paths.size()>i;++i){
            um[paths[i][0]]=1;
            if(1!=um[paths[i][1]])
                um[paths[i][1]]=0;
        }
        string answer="";
        for(auto item:um){
            if(0==item.second){
                answer=item.first;
                break;
            }
        }
        return answer;
    }
};
