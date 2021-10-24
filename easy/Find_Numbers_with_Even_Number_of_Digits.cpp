//from : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/



class Solution {
public:
    int findNumbers(vector<int>& nums,int cnt=0) {
        /*
        for(int item:nums)
            to_string(item).size()%2==0?++cnt:cnt;
        return cnt;
        */
        
        for(int i=0;nums.size()>i;++i){
            int num=nums[i];
            int digits=floor(log10(num))+1;            
            if(digits%2==0)
                ++cnt;
        }
        return cnt;
    }
};
