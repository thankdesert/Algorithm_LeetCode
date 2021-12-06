//from : https://leetcode.com/problems/relative-ranks/


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> v;
        for(int i=0;score.size()>i;++i)
            v.push_back(make_pair(score[i],i));
        sort(v.begin(),v.end(),greater<>());
        vector<string> answer(v.size(), "");
        answer[v[0].second]="Gold Medal";
        if(v.size()>=2)
            answer[v[1].second]="Silver Medal";
        if(v.size()>=3)
            answer[v[2].second]="Bronze Medal";
        for(int i=3;v.size()>i;++i){
            answer[v[i].second]=to_string(i+1);
        }
        return answer;
    }
};
