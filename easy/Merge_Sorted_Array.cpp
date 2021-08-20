//from : https://leetcode.com/problems/merge-sorted-array/



#include <set>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int> ms;
        for(int i = 0; i<m; i++)
            ms.insert(nums1[i]);
        for(int i = 0; i<n; i++)
            ms.insert(nums2[i]);
        nums1.clear();
        for(auto item : ms)
            nums1.push_back(item);
    }
};
