#include <algorithm>

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid = r/2;
        do {
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
            mid = (l + r) / 2;
            if(l > r)
                return l;
        } while(true);
    }
};
