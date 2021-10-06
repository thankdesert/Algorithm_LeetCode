//from : https://leetcode.com/problems/distribute-candies-to-people/


class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> answer(num_people, 0);
        int i=1,k=0;
        while(candies>0){
            candies>=i?answer[k]+=i:answer[k]+=candies;
            candies>=i?candies-=i:candies=0;
            ++k==num_people?k=0:k;
            ++i;
        }
        return answer;
    }
};
