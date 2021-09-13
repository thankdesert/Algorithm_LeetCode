//from : https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/


#include <algorithm>

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),
             [](const int& a, const int& b){
                 int a_1=__builtin_popcount(a),b_1=__builtin_popcount(b);
                 return a_1==b_1?a<b:a_1<b_1;});
        return arr;        
    }
};
