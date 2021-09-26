//from : https://leetcode.com/problems/build-an-array-with-stack-operations/



class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        for(int i=0, k=1;target.size()>i&&n>=k;){
            if(k==target[i]){
                v.push_back("Push");
                ++k;++i;
            }
            else{
                v.push_back("Push");
                v.push_back("Pop");
                ++k;
            }
        }
        return v;
    }
};
