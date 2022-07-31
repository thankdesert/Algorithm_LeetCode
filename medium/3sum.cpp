//from : https://leetcode.com/problems/3sum/


class Solution {
public:    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        set<vector<int>> unique_results;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            int a       = nums[i];
            int start   = i + 1;
            int end     = n - 1;
            while (start < end) {
                int b = nums[start];
                int c = nums[end];
                if (!(a + b + c)) {
                    unique_results.insert({a, b, c});
                    start = start + 1;
                    end = end - 1;
                } else if (a + b + c > 0) {
                    end = end - 1;
                } else {
                    start = start + 1;
                }
            }
        }
        copy(unique_results.begin(), unique_results.end(), back_inserter(answer));
        
        return answer;
    }
};
