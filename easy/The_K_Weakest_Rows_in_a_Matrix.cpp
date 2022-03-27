//from : https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/



class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        for(int i=0;mat.size()>i;++i){
            int sum=0;
            for(int j=0;mat[i].size()>j;++j)
                sum+=mat[i][j];
            v.push_back(make_pair(sum,i));
        }
        sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.first!=b.first)
                return a<b;
            else
                return a.second<b.second;
        });
        vector<int> answer;
        for(int i=0;k>i;++i)
            answer.push_back(v[i].second);
        return answer;
    }
};
