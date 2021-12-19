//from : https://leetcode.com/problems/sort-array-by-increasing-frequency/


class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b){
        if(a.second!=b.second)
            return a.second<b.second;
        else
            return a.first>b.first;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> um;
        
        for(int item:nums)
            ++um[item];        
        vector<pair<int,int>> tmp;
        for(auto item:um)
            tmp.push_back(make_pair(item.first,item.second));
        
        sort(tmp.begin(),tmp.end(),cmp);
        
        vector<int> answer;
        for(auto item:tmp){
            for(int i=0;item.second>i;++i)
                answer.push_back(item.first);
        }
        
        return answer;
    }
};
