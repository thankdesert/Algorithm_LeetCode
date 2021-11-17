//from : https://leetcode.com/problems/decode-xored-array/


class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> output={first};
        for(int i=0;encoded.size()>i;++i)
            output.push_back(output[i]^encoded[i]);
        return output;
    }
};
